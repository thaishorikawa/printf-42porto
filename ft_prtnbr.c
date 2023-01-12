/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:32:51 by thorikaw          #+#    #+#             */
/*   Updated: 2023/01/12 13:32:53 by thorikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prtnbr(int i)
{
	int		index;
	char	*nbr;

	index = 0;
	nbr = ft_itoa(i);
	index = ft_putstr(nbr);
	free (nbr);
	return (index);
}
