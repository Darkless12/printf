/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkless12 <darkless12@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:19:57 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/16 17:53:28 by darkless12       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(int nb)
{
	char	a;

	if (nb < 0)
	{
		ft_putchar_printf('-');
		if (nb == -2147483648)
		{
			ft_putchar_printf('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_print_int(nb / 10);
		ft_print_int(nb % 10);
	}
	else
	{
		a = nb + '0';
		ft_putchar_printf(a);
	}
}

int	ft_putint_printf(int nb)
{
	int	temp;
	int	count;

	temp = nb;
	count = 0;
	if (temp < 0)
	{
		count += 1;
		if (temp == -2147483648)
		{
			temp = -147483648;
			count += 1;
		}
		nb = -nb;
	}
	while (temp >= 10)
	{
		temp /= 10;
		count += 1;
	}
	count += 1;
	ft_print_int(nb);
	return (count);
}
