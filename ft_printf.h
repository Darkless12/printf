/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkless12 <darkless12@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:04:28 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/16 18:07:24 by darkless12       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen_printf(const char *s);
int		ft_printf(const char *str, ...);
int		ft_putstr_printf(char *s);
int		ft_putchar_printf(char c);
int		ft_puthex_printf(unsigned int n, char type);
int		ft_putint_printf(int nb);
int		ft_putptr_printf(void *ptr);

#endif