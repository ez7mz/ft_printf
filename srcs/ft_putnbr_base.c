/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:36:57 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/12 16:36:57 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void    ft_putnbr_base(long long int nbr, char *base)
{
    int base_size;

    base_size = ft_strlen(base);

    if (nbr >= 0 && nbr <= base_size)
        ft_putchar(base[nbr%base_size]);
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr_base(-nbr, base);
    }
    else
    {
        ft_putnbr_base(nbr / base_size, base);
        ft_putnbr_base(nbr % base_size, base);
    }
}

int main(void)
{
    int *c = 'R';
    char *x="hello";
    ft_putnbr_base(c, "0123456789ABCDEF");
    printf("\n%X", c);
}