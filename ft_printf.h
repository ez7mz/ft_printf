/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:25:05 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/16 22:35:59 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define BASE_LOW "0123456789abcdef"
# define BASE_UP "0123456789ABCDEF"
# define BASE_10 "0123456789"

int	ft_strlen(char *s);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_x(unsigned int nbr, char *base);
int	ft_putnbr_id(int nbr, char *base);
int	ft_putnbr_u(unsigned int nbr, char *base);
int	ft_putnbr_p(unsigned long long nbr, char *base);
int	ft_printf(const char *s, ...);

#endif
