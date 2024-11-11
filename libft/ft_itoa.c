/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:54 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:55:26 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_n_digits(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static char	*ft_nbr_to_str(int n, int n_size, char *number)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		number[i++] = '-';
		if (n == -2147483648)
		{
			number[i++] = '2';
			n = -147483648;
		}
		n = -n;
	}
	i = n_size - 1;
	if (n == 0)
		number[i++] = n + '0';
	while (n != 0)
	{
		number[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	number[n_size] = 0;
	return (number);
}

char	*ft_itoa(int n)
{
	int		n_size;
	char	*number;

	n_size = ft_get_n_digits(n);
	number = malloc((n_size + 1) * sizeof(char));
	if (number == NULL)
		return (NULL);
	ft_nbr_to_str(n, n_size, number);
	return (number);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_ITOA\n");
    char *result;

    // Teste 1: Número positivo
    result = ft_itoa(12345);
    printf("ft_itoa(12345) = %s\n", result);
    free(result);

    // Teste 2: Número negativo
    result = ft_itoa(-12345);
    printf("ft_itoa(-12345) = %s\n", result);
    free(result);

    // Teste 3: Zero
    result = ft_itoa(0);
    printf("ft_itoa(0) = %s\n", result);
    free(result);

    // Teste 4: Menor número inteiro (-2147483648)
    result = ft_itoa(-2147483648);
    printf("ft_itoa(-2147483648) = %s\n", result);
    free(result);

    // Teste 5: Maior número inteiro (2147483647)
    result = ft_itoa(2147483647);
    printf("ft_itoa(2147483647) = %s\n", result);
    free(result);

    // Teste 6: Número de um dígito positivo
    result = ft_itoa(7);
    printf("ft_itoa(7) = %s\n", result);
    free(result);

    // Teste 7: Número de um dígito negativo
    result = ft_itoa(-3);
    printf("ft_itoa(-3) = %s\n", result);
    free(result);

    return 0;
}

*/