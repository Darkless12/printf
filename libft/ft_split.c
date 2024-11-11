/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:35:17 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:37:03 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_words(char const *str, char *c, int *pos)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] != *c && str[0] != 0)
	{
		count++;
		*pos = i;
		i++;
	}
	while (str[i] != 0)
	{
		if (str[i] != *c && str[i - 1] == *c)
		{
			if (count == 0)
				*pos = i;
			count++;
		}
		i++;
	}
	return (count);
}

static int	ft_word_size(char const *s, char *c, int *pos)
{
	int	i;

	i = *pos;
	while (s[i] == *c)
		i++;
	*pos = i;
	while (s[i] != 0 && s[i] != *c)
		i++;
	return (i);
}

static void	ft_fill(char *dest, char const *str, int *pos, int lpos)
{
	int	i;

	i = 0;
	while (i < (lpos - *pos))
	{
		dest[i] = str[*pos + i];
		i++;
	}
	dest[i] = 0;
	*pos += i;
}

static void	ft_free_split(char **split, int i)
{
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	int		pos;
	int		lpos;
	int		i;
	int		words;
	char	**split;

	i = 0;
	words = ft_n_words(s, &c, &pos);
	split = malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	while (i < (words))
	{
		lpos = ft_word_size(s, &c, &pos);
		split[i] = (char *)malloc(sizeof(char) * ((lpos - pos) + 1));
		if (split[i] == NULL)
		{
			ft_free_split(split, i - 1);
			return (NULL);
		}
		ft_fill(split[i], s, &pos, lpos);
		i++;
	}
	split[i] = NULL;
	return (split);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	print_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		printf("split[%d]: '%s'\n", i, split[i]);
		i++;
	}
}

void	free_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int main()
{
    char **result;

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_SPLIT\n");

    // Teste 1: String com palavras separadas por um delimitador simples
    printf("Teste 1: String com palavras separadas por delimitador simples\n");
    result = ft_split("hello world split test", ' ');
    print_split(result);
    free_split(result);

    // Teste 2: Delimitador no início e no final
    printf("\nTeste 2: Delimitador no início e no final\n");
    result = ft_split(" test ", ' ');
    print_split(result);
    free_split(result);

    // Teste 3: Vários delimitadores consecutivos
    printf("\nTeste 3: Vários delimitadores consecutivos\n");
    result = ft_split("hello,,,world", ',');
    print_split(result);
    free_split(result);

    // Teste 4: String sem delimitador
    printf("\nTeste 4: String sem delimitador\n");
    result = ft_split("test", ',');
    print_split(result);
    free_split(result);

    // Teste 5: Delimitador em uma string vazia
    printf("\nTeste 5: Delimitador em uma string vazia\n");
    result = ft_split("", ' ');
    if (result && result[0] == NULL)
        printf("Resultado: Array vazio\n");
    free_split(result);

    // Teste 6: String composta apenas de delimitadores
    printf("\nTeste 6: String composta apenas de delimitadores\n");
    result = ft_split(",,,,", ',');
    if (result && result[0] == NULL)
        printf("Resultado: Array vazio\n");
    free_split(result);

    // Teste 7: Delimitador que não ocorre na string
    printf("\nTeste 7: Delimitador que não ocorre na string\n");
    result = ft_split("no_delimiter", ',');
    print_split(result);
    free_split(result);

    return 0;
}

*/