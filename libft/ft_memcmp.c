/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:14:19 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:48:05 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)(ptr1[i] - ptr2[i]));
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

	printf("\n\nFT_MEMCMP\n");

	printf("Testando comparação de memória com strings iguais\n");
	char s1[10] = "abcdefghi";
	char s2[10] = "abcdefghi";
	printf("Resultado de ft_memcmp (s1 == s2):");
	printf(" %d\n", ft_memcmp(s1, s2, 9));
		// Esperado: 0 (as strings são iguais)

	printf("Testando comparação de memória com strings diferentes\n");
	char s3[10] = "abcdefghi";
	char s4[10] = "abcdzfghi";
	printf("Resultado de ft_memcmp (s3 != s4):");
	printf(" %d\n", ft_memcmp(s3, s4, 9));
		// Esperado: valor negativo (primeira diferença é no caractere 'e' e 'z')

	printf("Testando comparação de memória com strings");
	printf(" de tamanhos diferentes\n");
	char s5[5] = "abcd";
	char s6[10] = "abcde";
	printf("Resultado de ft_memcmp (s5 e s6 de tamanhos");
	printf(" diferentes): %d\n", 
			ft_memcmp(s5, s6, 5));
		// Esperado: 0 (compara até o tamanho especificado, que é 5)

	printf("Testando comparação de memória com comparação");
	printf(" parcial\n");
	char s7[10] = "abcdefghi";
	char s8[10] = "abcxxfghi";
	printf("Resultado de ft_memcmp (primeira diferença após");
	printf(" 3 caracteres): %d\n", 
			ft_memcmp(s7, s8, 6));
		// Esperado: valor positivo (diferença entre 'd' e 'x')

	printf("Testando comparação de memória com caracteres nulos\n");
	char s9[10] = "abc\0defghi";
	char s10[10] = "abc\0xyzghi";
	printf("Resultado de ft_memcmp (strings com nulo no meio): %d\n", 
			ft_memcmp(s9, s10, 10));
		// Esperado: valor negativo (devido ao nulo em ambas as strings)

	return 0;
}

*/