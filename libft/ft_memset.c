/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:14:31 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:46:21 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_MEMSET\n");

	printf("Testando com um caractere padrão e um tamanho\n");
	char str1[10] = "abcdefghi";
	ft_memset(str1, 'X', 5);
	printf("Resultado após memset (5 primeiros caracteres com 'X'):");
	printf(" %s\n", str1);
		// Esperado: "XXXXXfghi"

	printf("Testando com um caractere nulo e tamanho menor que o");
	printf(" tamanho da string\n");
	char str2[10] = "123456789";
	ft_memset(str2, '\0', 3);
	printf("Resultado após memset (3 primeiros caracteres com '\\0'):");
	printf(" '%s'\n", str2);
		// Esperado: "000456789" (deve preencher primeiros 3 caracteres com '\0')

	printf("Testando com tamanho igual ao tamanho da string\n");
	char str3[10] = "abcdefgh";
	ft_memset(str3, 'Z', 8);
	printf("Resultado após memset (todos os 8 caracteres com");
	printf(" 'Z'): %s\n", str3);
		// Esperado: "ZZZZZZZZ"

	printf("Testando com tamanho maior que o tamanho da string\n");
	char str4[10] = "12345";
	ft_memset(str4, 'A', 10);
	printf("Resultado após memset (preenchendo além do fim da ");
	printf("string): %s\n", str4);
		// Esperado: "AAAAA"

	return 0;
}
*/
