/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:42:24 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/16 22:27:42 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nbr, char *base)
{
	unsigned int	base_size;
	long			n;
	int				len;

	base_size = ft_strlen(base);
	n = nbr;
	len = 0;
	if (n >= 0 && n < base_size)
		len += ft_putchar(base[n % base_size]);
	else
	{
		len += ft_putnbr_u(n / base_size, base);
		len += ft_putchar(base[n % base_size]);
	}
	return (len);
}
