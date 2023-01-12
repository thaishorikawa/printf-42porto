/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:01:22 by thorikaw          #+#    #+#             */
/*   Updated: 2023/01/12 12:01:25 by thorikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	num(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;
	int		i;

	count = num(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	i = 1;
	str[count] = '\0';
	count--;
	if (n < 0)
	{
		str[0] = '-';
		i = -1;
	}
	else if (n == 0)
		str[count] = '0';
	while (n != 0)
	{
		str[count] = ((n % 10) * i) + 48;
		n = n / 10;
		count--;
	}
	return (str);
}
/*
int main()
{
	int number1 = 1405;
	int number2 = -1405;

	printf("%s\n", ft_itoa(number1));
	printf("%s\n", ft_itoa(number2));

	return 0;
}*/
