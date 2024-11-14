/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:04:28 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/14 16:29:05 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_putstr_pf(char *s);
int		ft_putchar_pf(char c);
size_t	ft_strlen_pf(const char *s);
void	ft_put_hex_pf(unsigned int n, char type, int *count);
void	ft_put_nbr_pf(int nb, int *count);

#endif