/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:25:59 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/14 16:27:05 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	find_type(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (c == (char)str[i])
			return (1);
		i++;
	}
	return (0);
}

int	send_by_type(va_list boxofvars, char type, int *count)
{
	if (type == 'c')
		return(ft_putchar_pf(va_arg(boxofvars, int)));
	else if (type == 's')
		return(ft_putstr_pf(va_arg(boxofvars, char*)));
	else if (find_type(type, "xXu"))
		ft_put_hex_pf(va_arg(boxofvars, unsigned int), type, count);
	else if (find_type(type, "di"))
		ft_put_nbr_pf(va_arg(boxofvars, unsigned int), count);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	boxofvars;
	int		i;
	int		count;

	va_start(boxofvars, str);
	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			i++;
			if (find_type(str[i], "%%cspdiuxX") == 1)
				count += send_by_type(boxofvars, str[i], &count);
		}
		else if (str[i] != '%')
			count += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(boxofvars);
	return (count);
}
