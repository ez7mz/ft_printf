/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:24:45 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/13 20:16:15 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_format(va_list args, char format)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 's')
		ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		ft_putnbr_id(va_arg(args, int), "0123456789");
	else if (format == 'x')
		ft_putnbr_xX(va_arg(args, unsigned long), "0123456789abcdef");
	else if (format == 'X')
		ft_putnbr_xX(va_arg(args, unsigned long), "0123456789ABCDEF");
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), "0123456789");
	else if (format == 'p')
	{
		write(1, "0x", 2);
		ft_putnbr_p(va_arg(args, unsigned long long), "0123456789abcdef");
	}
	else if (format == '%')
		ft_putchar('%');
	else
		ft_putchar(format);
}

int	ft_printf(const char *s, ...)
{
	va_list args;
	int		i;

	va_start(args, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && !s[i+1])
			break ;
		if (s[i] == '%')
		{
			i++;
			ft_format(args, s[i]);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (0);
}
