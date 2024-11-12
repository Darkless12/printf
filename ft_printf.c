/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:25:59 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/12 15:43:49 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	boxofvars;
	int		i;

	va_start(boxofvars, str);
	i = 0;
	while (str != 0)
	{
		if (str[i] != '%')
			write(1, str[i], 1);
		else if (str[i] == '%' && str[i + 1] == 'c')
			ft_putchar_fd(va_arg(boxofvars, int), 1);
		else if (str[i] == '%' && str[i + 1] == 's')
			ft_putstr_fd(va_arg(boxofvars, char *), 1);
		else if (str[i] == '%' && str[i + 1] == 'p')
			ft_puthex(va_arg(boxofvars, void *));
		else if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
			ft_putnbr(va_arg(boxofvars, int));
		else if (str[i] == '%' && str[i + 1] == 'u')
			ft_putnbr_unsigned(va_arg(boxofvars, unsigned int));
		else if (str[i] == '%' && (str[i + 1] == 'x' || str[i + 1] == 'X'))
			ft_puthex(va_arg(boxofvars, unsigned int));
		else if (i > 0 && str[i] == '%' && str[i - 1] == '%')
			ft_putchar_fd('%', 1);
		i++;
	}
}
