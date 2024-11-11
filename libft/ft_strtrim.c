/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:18:36 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:30:07 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findpos(char const *s1, char const *set, int dir)
{
	int	i;
	int	j;

	i = 0;
	if (dir < 0)
		j = ft_strlen(s1) - 1;
	else
		j = 0;
	while (set[i] != 0)
	{
		if (set[i] != s1[j])
			i++;
		else
		{
			i = 0;
			j += dir;
		}
	}
	return (j);
}

static char	*ft_strcpy(char *copy, char const *src, int len)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		start;
	unsigned int		end;
	char				*copy;

	start = ft_findpos(s1, set, 1);
	if (start != ft_strlen(s1))
		end = ft_findpos(s1, set, -1) + 1;
	else
		end = start;
	copy = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, &s1[start], end - start);
	return (copy);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_STRTRIM\n");
	// Teste 1: Caracteres a serem removidos no início e no final
	char const *s1 = "  42 Lisboa  ";
	char const *set = " ";
	char *trimmed1 = ft_strtrim(s1, set);
	printf("Teste 1: Remover espaços no início e no final\n");
	if (trimmed1)
	{
		printf("Resultado: '%s'\n", trimmed1);  // Esperado: "42 Lisboa"
		free(trimmed1);
	}

	// Teste 2: Sem caracteres a serem removidos
	char const *s2 = "42 Lisboa";
	char const *set2 = " ";
	char *trimmed2 = ft_strtrim(s2, set2);
	printf("\nTeste 2: Sem caracteres a serem removidos\n");
	if (trimmed2)
	{
		printf("Resultado: '%s'\n", trimmed2);  // Esperado: "42 Lisboa"
		free(trimmed2);
	}

	// Teste 3: Todos os caracteres são do conjunto de remoção
	char const *s3 = "xxxx";
	char const *set3 = "x";
	char *trimmed3 = ft_strtrim(s3, set3);
	printf("\nTeste 3: Todos os caracteres são do conjunto de remoção\n");
	if (trimmed3)
	{
		printf("Resultado: '%s'\n", trimmed3);  // Esperado: ""
		free(trimmed3);
	}

	// Teste 4: String vazia
	char const *s4 = "";
	char const *set4 = " ";
	char *trimmed4 = ft_strtrim(s4, set4);
	printf("\nTeste 4: String vazia\n");
	if (trimmed4)
	{
		printf("Resultado: '%s'\n", trimmed4);  // Esperado: ""
		free(trimmed4);
	}

	// Teste 5: String com caracteres do conjunto de remoção apenas no início
	char const *s5 = "xx42 Lisboa";
	char const *set5 = "x";
	char *trimmed5 = ft_strtrim(s5, set5);
	printf("\nTeste 5: Caracteres do conjunto de remoção apenas no início\n");
	if (trimmed5)
	{
		printf("Resultado: '%s'\n", trimmed5);  // Esperado: "42 Lisboa"
		free(trimmed5);
	}

	// Teste 6: String com caracteres do conjunto de remoção apenas no final
	char const *s6 = "42 Lisboa   ";
	char const *set6 = " ";
	char *trimmed6 = ft_strtrim(s6, set6);
	printf("\nTeste 6: Caracteres do conjunto de remoção apenas no final\n");
	if (trimmed6)
	{
		printf("Resultado: '%s'\n", trimmed6);  // Esperado: "42 Lisboa"
		free(trimmed6);
	}

	return 0;
}

*/