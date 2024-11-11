/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:18:21 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 14:38:33 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *copy, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

char	*ft_strdup(const char *s)
{
	char	*copy;

	copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	return (ft_strcpy(copy, (char *)s));
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	/ cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_STRDUP\n");
	// Teste 1: Testando com uma string normal
	const char *str1 = "42 Lisboa";
	char *copy1 = ft_strdup(str1);
	
	printf("Teste 1: String normal\n");
	if (copy1)
	{
		printf("Original: %s\n", str1);
		printf("Copia: %s\n", copy1);
		free(copy1); // Liberando a memória alocada
	}
	else
	{
		printf("Erro ao alocar memória!\n");
	}

	// Teste 2: Testando com uma string vazia
	const char *str2 = "";
	char *copy2 = ft_strdup(str2);
	
	printf("\nTeste 2: String vazia\n");
	if (copy2)
	{
		printf("Original: '%s'\n", str2);
		printf("Copia: '%s'\n", copy2);
		free(copy2);
	}
	else
	{
		printf("Erro ao alocar memória!\n");
	}

	// Teste 3: Testando com uma string NULL
	const char *str3 = NULL;
	char *copy3 = ft_strdup(str3);
	
	printf("\nTeste 3: String NULL\n");
	if (copy3 == NULL)
	{
		printf("Copia: NULL (comportamento esperado)\n");
	}
	else
	{
		printf("Erro: esperava-se NULL\n");
		free(copy3);
	}

	return 0;
}

*/