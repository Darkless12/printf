/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:53:03 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/08 10:50:53 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb <= 0 && size <= 0)
		ptr = malloc(1 * 1);
	else
		ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/*

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_CALLOC\n");
	// Teste 1: Alocando memória para 5 elementos de int
	int *arr = ft_calloc(5, sizeof(int));
	if (arr != NULL)
	{
		for (int i = 0; i < 5; i++)
			printf("arr[%d] = %d\n", i, arr[i]);  // Esperado: 0 para todos
		free(arr);
	}

	// Teste 2: Tamanho zero, esperando NULL
	char *str = ft_calloc(0, sizeof(char));
	printf("Teste 2: %s\n", str ? str : "NULL");  // Esperado: NULL

	// Teste 3: Alocando zero bytes, esperado NULL
	void *ptr = ft_calloc(10, 0);
	printf("Teste 3: %p\n", ptr);  // Esperado: NULL

	return 0;
}

*/