/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:24:45 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/16 23:02:45 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr_id(va_arg(args, int), BASE_10);
	else if (format == 'x')
		len += ft_putnbr_x(va_arg(args, unsigned int), BASE_LOW);
	else if (format == 'X')
		len += ft_putnbr_x(va_arg(args, unsigned int), BASE_UP);
	else if (format == 'u')
		len += ft_putnbr_u(va_arg(args, unsigned int), BASE_10);
	else if (format == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_putnbr_p(va_arg(args, unsigned long long), BASE_LOW);
	}
	else if (format == '%')
		len += ft_putchar('%');
	else
		len += ft_putchar(format);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, s);
	i = 0;
	len = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%' && !s[i + 1])
			break ;
		if (s[i] == '%')
		{
			i++;
			len += ft_format(args, s[i]);
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
