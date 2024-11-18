/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:25:59 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/18 16:31:16 by ddiogo-f         ###   ########.fr       */
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

	i = 0;
	count = (str != NULL) - 1;
	if (str != NULL)
		va_start(boxofvars, str);
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			if (find_type(str[++i], "%%cspdiuxX") == 1)
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
