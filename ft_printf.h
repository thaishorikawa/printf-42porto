/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:07:54 by thorikaw          #+#    #+#             */
/*   Updated: 2023/01/04 15:08:05 by thorikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printpercent(void);
int		ft_printptr(unsigned long long ptr);
int		ft_prthex(unsigned int num, const char format);
int		ft_prtnbr(int i);
int		ft_prtunsg(unsigned int nbr);
void	ft_putchar(char c);
int		ft_putstr(const char *str);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);

#endif
