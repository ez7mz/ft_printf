/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:25:05 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/14 00:54:49 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int 	ft_strlen(char *s);
int    	ft_putchar(char c);
int		ft_putstr(char *s);
int    	ft_putnbr_xX(unsigned long nbr, char *base);
int		ft_putnbr_id(int nbr, char *base);
int    	ft_putnbr_u(unsigned int nbr, char *base);
int    	ft_putnbr_p(unsigned long long nbr, char *base);
int		ft_printf(const char *s, ...);

#endif
