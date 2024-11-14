/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:19:57 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/14 16:31:54 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_nbr_pf(int nb, int *count)
{
	char	a;

	if (nb < 0)
	{
		count += ft_putchar_pf('-');
		if (nb == -2147483648)
		{
			count += ft_putchar_pf('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_put_nbr_pf(nb / 10, count);
		ft_put_nbr_pf(nb % 10, count);
	}
	else
	{
		a = nb + '0';
		count += ft_putchar_pf(a);
	}
}