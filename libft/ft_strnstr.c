/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:09:53 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 14:25:03 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == 0)
		return ((char *)big);
	if (len == 0 || big[i] == 0)
		return (0);
	if (len < ft_strlen(little))
		return (0);
	while (i < len - ft_strlen(little) + 1)
	{
		while (big[i + j] == little[j] && little[j] != 0)
		{
			j++;
		}
		if (little[j] == 0)
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_STRNSTR\n");

	printf("Testando ft_strnstr com substring encontrada dentro de 'big'\n");
	char big1[] = "Hello, world!";
	char little1[] = "world";
	printf("Resultado de ft_strnstr: %s\n", ft_strnstr(big1, little1, 13));
		// Esperado: "world!" (a substring 'world' é encontrada)

	printf("Testando ft_strnstr com substring no início de 'big'\n");
	char big2[] = "Hello, world!";
	char little2[] = "Hello";
	printf("Resultado de ft_strnstr: %s\n", ft_strnstr(big2, little2, 13));
		// Esperado: "Hello, world!" (a substring 'Hello' está no início)

	printf("Testando ft_strnstr com substring não encontrada em 'big'\n");
	char big3[] = "Hello, world!";
	char little3[] = "42";
	printf("Resultado de ft_strnstr: %s\n", ft_strnstr(big3, little3, 13));
		// Esperado: (NULL) (a substring '42' não está presente)

	printf("Testando ft_strnstr com substring maior que 'big'\n");
	char big4[] = "Hello";
	char little4[] = "Hello, world!";
	printf("Resultado de ft_strnstr: %s\n", ft_strnstr(big4, little4, 5));
		// Esperado: (NULL) (a substring é maior que 'big' e não cabe)

	printf("Testando ft_strnstr com len menor que o tamanho de 'big'\n");
	char big5[] = "Hello, world!";
	char little5[] = "world";
	printf("Resultado de ft_strnstr: %s\n", ft_strnstr(big5, little5, 5));
		// Esperado: (NULL) (o len é menor que a posição onde 'world' começa)

	printf("Testando ft_strnstr com len igual ao tamanho de 'big'\n");
	char big6[] = "Hello, world!";
	char little6[] = "world";
	printf("Resultado de ft_strnstr: %s\n", ft_strnstr(big6, little6, 13));
		// Esperado: "world!" (encontra 'world' dentro de 'big')

	return 0;
}

*/