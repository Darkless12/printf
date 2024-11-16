/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkless12 <darkless12@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:52:17 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/16 17:30:50 by darkless12       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_printf(char *s)
{
	if (!s)
	{
		write(1, "(NULL)", 6);
		return (6);
	}
	write(1, s, ft_strlen_printf(s));
	return (ft_strlen_printf(s));
}
