/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:25:59 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/19 10:26:01 by ddiogo-f         ###   ########.fr       */
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

int	cycle_string(va_list boxofvars, int *i, const char *str)
{
	if (str[*i] == '%')
	{
		*i += 1;
		if (find_type(str[*i], "%%cspdiuxX") == 1)
			return (send_by_type(boxofvars, str[*i]));
	}
	else if (str[*i] != '%')
		return (ft_putchar_printf(str[*i]));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	boxofvars;
	int		i;
	int		count;
	int		result;

	i = 0;
	count = 0;
	va_start(boxofvars, str);
	if (!str)
		return (-1);
	while (str[i] != 0)
	{
		result = cycle_string(boxofvars, &i, str);
		i++;
		count += result;
		if (result == -1)
			return (-1);
	}
	va_end(boxofvars);
	return (count);
}
