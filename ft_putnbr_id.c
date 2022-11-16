/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:12:28 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/16 22:27:31 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_id(int nbr, char *base)
{
	int	base_size;
	int	len;

	base_size = ft_strlen(base);
	len = 0;
	if (nbr == -2147483648)
		len += ft_putstr("-2147483648");
	else if (nbr >= 0 && nbr < base_size)
	{
		len += ft_putchar(base[nbr % base_size]);
	}
	else if (nbr < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr_id(-nbr, base);
	}
	else
	{
		len += ft_putnbr_id(nbr / base_size, base);
		len += ft_putchar(base[nbr % base_size]);
	}
	return (len);
}
