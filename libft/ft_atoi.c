/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:07:43 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 11:00:03 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_empty(const char *str1, int a)
{
	while ((str1[a] >= 9 && str1[a] <= 13) || str1[a] == 32)
		a++;
	return (a);
}

static char	ft_check_sign(const char *str2, int *b)
{
	int	x;

	x = 0;
	if (str2[*b] == '+' || str2[*b] == '-')
	{
		if (str2[*b] == '-')
			x++;
		*b += 1;
	}
	if (x % 2 == 0)
		return (43);
	else
		return (45);
}

static int	ft_get_int(const char *str3, int *c)
{
	int	f;
	int	i;

	i = *c;
	f = 0;
	while (str3[i] >= '0' && str3[i] <= '9')
	{
		f = f + (str3[i] - '0');
		if (str3[i + 1] >= '0' && str3[i + 1] <= '9')
			f *= 10;
		i++;
	}
	return (f);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	char	val;

	i = 0;
	i = ft_check_empty(nptr, i);
	val = ft_check_sign(nptr, &i);
	i = ft_get_int(nptr, &i);
	if (val == 43 && i >= 0)
		return (i);
	else if (val == 45)
	{
		i = -i;
		if (i < 0)
			return (i);
	}
	return (i);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
    // cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_ATOI\n");
    printf("Valor de '+42': %d\n", ft_atoi("+42"));   // Esperado: 42
    printf("Valor de '-42': %d\n", ft_atoi("-42"));   // Esperado: -42
    printf("Valor de '  42': %d\n", ft_atoi("  42")); // Esperado: 42
    printf("Valor de '42abc':");
    printf(" %d\n", ft_atoi("42abc"));// Esperado: 42
    printf("Valor de '   -123abc':");
    printf(" %d\n", ft_atoi("   -123abc")); // Esperado: -123
    printf("Valor de '  0':");
    printf(" %d\n", ft_atoi("  0"));   // Esperado: 0
	printf("Valor de '-2147483648':");
    printf(" %d\n", ft_atoi("-2147483648"));   // Esperado: -2147483648
	printf("Valor de '2147483647':");
    printf(" %d\n", ft_atoi("2147483647"));   // Esperado: 2147483647

    return 0;
}

*/