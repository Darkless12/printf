/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkless12 <darkless12@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:25:59 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/16 18:09:30 by darkless12       ###   ########.fr       */
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

int	send_by_type(va_list boxofvars, char type)
{
	int	result;

	if (type == 'c')
		result = (ft_putchar_printf(va_arg(boxofvars, int)));
	else if (type == 's')
		result = (ft_putstr_printf(va_arg(boxofvars, char *)));
	else if (find_type(type, "p"))
		result = ft_putptr_printf(va_arg(boxofvars, void *));
	else if (find_type(type, "di"))
		result = (ft_putint_printf(va_arg(boxofvars, int)));
	else if (find_type(type, "xXu"))
		result = ft_puthex_printf(va_arg(boxofvars, unsigned int), type);
	else
		result = ft_putchar_printf('%');
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	boxofvars;
	int		i;
	int		count;
	int		result;

	va_start(boxofvars, str);
	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			i++;
			if (find_type(str[i], "%%cspdiuxX") == 1)
				result = send_by_type(boxofvars, str[i]);
		}
		else if (str[i] != '%')
			result = ft_putchar_printf(str[i]);
		i++;
		count += result;
		if (result == -1)
			return (-1);
	}
	va_end(boxofvars);
	return (count);
}
