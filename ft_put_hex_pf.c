/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:51:41 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/14 16:27:07 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex_pf(unsigned int n, char type, int *count)
{
	char			*base_char;
	unsigned int	base;

	if (type == 'x')
		base_char = "0123456789abcdef";
	else if (type == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789";
	base = ft_strlen_pf(base_char);
	if (n >= base)
	{
		ft_put_hex_pf(n / base, type, count);
		ft_put_hex_pf(n % base, type, count);
	}
	else
		*count += ft_putchar_pf((char)base_char[n]);
}
