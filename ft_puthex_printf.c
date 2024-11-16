/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkless12 <darkless12@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:51:41 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/16 17:53:11 by darkless12       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, char type)
{
	char			*base_char;
	unsigned int	base;

	if (type == 'x')
		base_char = "0123456789abcdef";
	else if (type == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789";
	base = ft_strlen_printf(base_char);
	if (n >= base)
	{
		ft_print_hex(n / base, type);
		ft_print_hex(n % base, type);
	}
	else
		ft_putchar_printf((char)base_char[n]);
}

int	ft_puthex_printf(unsigned int n, char type)
{
	int	base;
	int	temp;
	int	count;

	temp = n;
	count = 0;
	if (type == 'u')
		base = 10;
	else
		base = 16;
	while (temp >= base)
	{
		count += 1;
		temp /= base;
	}
	ft_print_hex(n, type);
	count += 1;
	return (count);
}
