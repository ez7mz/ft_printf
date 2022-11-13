/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:33:47 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/13 23:39:03 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putstr(char *s)
{
    int len;

    len = 0;
    if (!s)
        s = "(null)";
    write(1, s, ft_strlen(s));
    len += ft_strlen(s);
    return (len);
}