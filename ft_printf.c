/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:11:44 by thorikaw          #+#    #+#             */
/*   Updated: 2023/01/04 15:11:48 by thorikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_checker(va_list args, const char format)
{
	if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_printptr(va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_prtnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_prtunsg(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_prthex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_printpercent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		num_args;
	int		i;
	va_list	args;

	i = 0;
	num_args = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			num_args += ft_format_checker(args, format[i + 1]);
			i++;
		}
		else
			num_args += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (num_args);
}
/*
int main()
{
	ft_printf("%s\n", "good morning"); 

	return 0;
}
*/
