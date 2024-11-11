/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:43:55 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 16:30:33 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (!dest && !src && n > 0)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			ptrdest[i - 1] = ptrsrc[i - 1];
			i--;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_MEMMOVE\n");

	printf("Testando memmove com áreas de memória");
	printf(" não sobrepostas\n");
	char dest1[10] = "abcdefghi";
	char src1[10] = "123456789";
	printf("Antes de ft_memmove, dest1:");
	printf(" %s, src1: %s\n", dest1, src1);
	ft_memmove(dest1, src1, 5);
	printf("Depois de ft_memmove, dest1: %s\n", dest1);
		// Esperado: dest1: "12345fghi" (primeiros 5 chr de src1 copiados)

	printf("Testando memmove com áreas de memória ");
	printf("sobrepostas (src < dest)\n");
	char dest2[10] = "abcdefghi";
	printf("Antes de ft_memmove, dest2: %s\n", dest2);
	ft_memmove(dest2 + 2, dest2, 5);  
	// Movendo parte de 'dest2' para dentro de si mesmo
	printf("Depois de ft_memmove, dest2: %s\n", dest2);
		// Esperado: dest2: "ababcdeghi" (move 'abcde' para o final)

	printf("Testando memmove com áreas de memória");
	printf(" sobrepostas (src > dest)\n");
	char dest3[10] = "abcdefghi";
	printf("Antes de ft_memmove, dest3: %s\n", dest3);
	ft_memmove(dest3 + 2, dest3, 6);  // Movendo de uma parte para a outra
	printf("Depois de ft_memmove, dest3: %s\n", dest3);
		// Esperado: dest3: "ababcdefghi" (move 'abc' para o final)

	printf("Testando memmove com áreas de memória idênticas\n");
	char dest4[10] = "abcdefghi";
	printf("Antes de ft_memmove, dest4: %s\n", dest4);
	ft_memmove(dest4, dest4, 5);  // Movendo para a mesma posição
	printf("Depois de ft_memmove, dest4: %s\n", dest4);
		// Esperado: dest4: "abcde" (sem alteração visível)

	return 0;
}

*/