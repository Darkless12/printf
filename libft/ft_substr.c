/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:33:38 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 14:55:17 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *copy, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != 0 && i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	totalsize;

	if (start > ft_strlen(s))
	{
		start = ft_strlen(s);
		totalsize = 0;
	}
	else
		totalsize = ft_strlen(&s[start]);
	if (totalsize > len)
		totalsize = len;
	if (s == NULL)
		return (NULL);
	copy = (char *)malloc((totalsize + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	return (ft_strcpy(copy, &s[start], len));
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_SUBSTR\n");
	// Teste 1: Substring dentro dos limites normais
	char const *str1 = "42 Lisboa";
	char *sub1 = ft_substr(str1, 3, 4);
	
	printf("Teste 1: Substring dentro dos limites\n");
	if (sub1)
	{
		printf("Original: %s\n", str1);
		printf("Substring (start = 3, len = 4): %s\n", sub1);
		free(sub1);
	}
	else
	{
		printf("Erro ao alocar memória!\n");
	}

	// Teste 2: Substring com `start` além do comprimento da string
	char const *str2 = "42 Lisboa";
	char *sub2 = ft_substr(str2, 20, 5);
	
	printf("\nTeste 2: Start além do comprimento da string\n");
	if (sub2)
	{
		printf("Original: %s\n", str2);
		printf("Substring (start = 20, len = 5): '%s'\n", sub2); // Esperado: ""
		free(sub2);
	}
	else
	{
		printf("Erro ao alocar memória!\n");
	}

	// Teste 3: Substring com comprimento maior que o restante da string
	char const *str3 = "42 Lisboa";
	char *sub3 = ft_substr(str3, 4, 10);
	
	printf("\nTeste 3: Comprimento maior que o restante da string\n");
	if (sub3)
	{
		printf("Original: %s\n", str3);
		printf("Substring (start = 4, len = 10):");
		printf(" %s\n", sub3); // Esperado: "Lisboa"
		free(sub3);
	}
	else
	{
		printf("Erro ao alocar memória!\n");
	}

	// Teste 4: Substring vazia
	char const *str4 = "";
	char *sub4 = ft_substr(str4, 0, 5);
	
	printf("\nTeste 4: Substring de string vazia\n");
	if (sub4)
	{
		printf("Original: '%s'\n", str4);
		printf("Substring (start = 0, len = 5): '%s'\n", sub4); // Esperado: ""
		free(sub4);
	}
	else
	{
		printf("Erro ao alocar memória!\n");
	}

	return 0;
}

*/