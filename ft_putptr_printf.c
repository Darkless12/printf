/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkless12 <darkless12@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:42:13 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/16 17:54:19 by darkless12       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(unsigned long n)
{
	char			*base_char;

	base_char = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_ptr(n / 16);
		ft_print_ptr(n % 16);
	}
	else
		ft_putchar_printf((char)base_char[n]);
}

int	ft_putptr_printf(void *ptr)
{
	unsigned long	temp;
	int				count;

	if (!ptr)
		return (ft_putstr_printf("(nil)"));
	temp = (unsigned long)ptr;
	count = 0;
	while (temp >= 16)
	{
		temp /= 16;
		count += 1;
	}
	count += ft_putstr_printf("0x") + 1;
	ft_print_ptr((unsigned long)ptr);
	return (count);
}
