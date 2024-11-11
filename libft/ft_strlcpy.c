/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:12:09 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:32:37 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int				i;
	unsigned int	j;

	i = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (i);
	while (src[j] != 0 && j < size - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = 0;
	return (i);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_STRLCPY\n");

	printf("Testando ft_strlcpy com buffer suficiente\n");
	char dst1[20];
	const char *src1 = "Hello, world!";
	size_t size1 = 20;
	printf("Resultado de ft_strlcpy: %zu\n", ft_strlcpy(dst1, src1, size1));
	printf("Conteúdo de dst: %s\n", dst1);
		// Esperado: 'Hello, world!' (copia a string inteira)

	printf("Testando ft_strlcpy com buffer maior que a string de origem\n");
	char dst2[20];
	const char *src2 = "Short string";
	size_t size2 = 20;
	printf("Resultado de ft_strlcpy: %zu\n", ft_strlcpy(dst2, src2, size2));
	printf("Conteúdo de dst: %s\n", dst2);
		// Esperado: 'Short string' (copia a string inteira)

	printf("Testando ft_strlcpy com buffer menor que a string de origem\n");
	char dst3[6];
	const char *src3 = "This is a long string";
	size_t size3 = 6;
	printf("Resultado de ft_strlcpy: %zu\n", ft_strlcpy(dst3, src3, size3));
	printf("Conteúdo de dst: %s\n", dst3);
		// Esperado: 'This ' (copia o máximo possível sem ultrapassar o limite)

	printf("Testando ft_strlcpy com buffer de tamanho 0\n");
	char dst4[1];
	const char *src4 = "Nothing copied";
	size_t size4 = 0;
	printf("Resultado de ft_strlcpy: %zu\n", ft_strlcpy(dst4, src4, size4));
	printf("Conteúdo de dst: '%s'\n", dst4);
		// Esperado: 'Nada copiado' (não copia e retorna o comprimento de src)

	printf("Testando ft_strlcpy com string de origem vazia\n");
	char dst5[20];
	const char *src5 = "";
	size_t size5 = 20;
	printf("Resultado de ft_strlcpy: %zu\n", ft_strlcpy(dst5, src5, size5));
	printf("Conteúdo de dst: '%s'\n", dst5);
		// Esperado: '' (não copia nada porque a string src está vazia)

	return 0;
}
*/
