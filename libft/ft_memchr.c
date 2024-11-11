/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:56:15 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:48:25 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_MEMCHR\n");

	printf("Testando com caracteres encontrados na memória\n");
	char str1[] = "abcdefghi";
	printf("Testando 'e' em 'abcdefghi' (n=9):");
	printf(" %s\n", (char *)ft_memchr(str1, 'e', 9)); 
		// Esperado: "efghi"
	printf("Testando 'c' em 'abcdefghi' (n=9):");
	printf(" %s\n", (char *)ft_memchr(str1, 'c', 9)); 
		// Esperado: "cdefghi"

	printf("Testando com caracteres não encontrados\n");
	printf("Testando 'z' em 'abcdefghi' (n=9):");
	printf(" %s\n", (char *)ft_memchr(str1, 'z', 9)); 
		// Esperado: (NULL)
	printf("Testando '1' em 'abcdefghi' (n=9):");
	printf(" %s\n", (char *)ft_memchr(str1, '1', 9)); 
		// Esperado: (NULL)

	printf("Testando com um número de caracteres menor que o necessário\n");
	printf("Testando 'f' em 'abcdefghi' (n=3):");
	printf(" %s\n", (char *)ft_memchr(str1, 'f', 3)); 
		// Esperado: (NULL) pq 'f' está fora do alcance primeiros 3 caracteres

	printf("Testando com o caractere '\\0'\n");
	char str2[] = "abc\0def";
	printf("Testando '\\0' em 'abc\\0def' (n=7):");
	printf(" %s\n", (char *)ft_memchr(str2, '\0', 7)); 
		// Esperado: "\0def" porque '\0' é encontrado na posição 3
	return 0;
}

*/