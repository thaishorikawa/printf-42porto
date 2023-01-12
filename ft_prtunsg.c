/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtunsg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:41:20 by thorikaw          #+#    #+#             */
/*   Updated: 2023/01/12 13:41:21 by thorikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	uns_num(unsigned int n)
{
	int	nbr;

	nbr = 0;
	while (n != 0)
	{
		n = n / 10;
		nbr++;
	}
	return (nbr);
}

int	ft_prtunsg(unsigned int nbr)
{
	unsigned int	n;
	char			*res;
	int				i;

	if (nbr == 0)
		return (write(1, "0", 1));
	n = uns_num(nbr);
	i = n;
	res = malloc((n + 1) * (sizeof(char)));
	if (!res)
		return (0);
	res[n--] = '\0';
	while (nbr != 0)
	{
		res[n--] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	ft_putstr(res);
	free (res);
	return (i);
}
