/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:24:54 by thorikaw          #+#    #+#             */
/*   Updated: 2023/01/12 12:24:56 by thorikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_counthex(unsigned long long num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		i++;
		num = num / 16;
	}
	return (i);
}

void	ft_ptrtohexa(unsigned long long num)
{
	const char	base[17] = "0123456789abcdef";

	if (num >= 16)
	{
		ft_ptrtohexa(num / 16);
		ft_putchar_fd(base[num % 16], 1);
	}
	else
		ft_putchar_fd(base[num % 16], 1);
}

int	ft_printptr(unsigned long long ptr)
{
	int	index;

	index = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	else
	{
		index += write(1, "0x", 2);
		ft_ptrtohexa(ptr);
		index += ft_counthex(ptr);
	}
	return (index);
}
