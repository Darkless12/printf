/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:43:19 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:31:58 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

	
// Função de callback: converte letras para maiúsculas, com base na posição
char to_upper_even_indices(unsigned int index, char c)
{
	if (index % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32); // Converte para maiúscula
	return c; // Caso contrário, mantém o caractere
}

// Função de callback: adiciona a posição ASCII do índice ao caractere
char add_index_to_char(unsigned int index, char c)
{
	return (c + index);
}

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	
	char *result;
	
	printf("\n\nFT_STRMAPI\n");
	// Teste 1: Converter caracteres em índices pares para maiúsculas
	result = ft_strmapi("hello world", to_upper_even_indices);
	printf("ft_strmapi(\"hello world\", to_upper_even_indices) = %s\n", result);
	free(result);

	// Teste 2: Adiciona o índice ASCII ao caractere original
	result = ft_strmapi("abcd", add_index_to_char);
	printf("ft_strmapi(\"abcd\", add_index_to_char) = %s\n", result);
	free(result);

	// Teste 3: String vazia
	result = ft_strmapi("", to_upper_even_indices);
	printf("ft_strmapi(\"\", to_upper_even_indices) = \"%s\"\n", result);
	free(result);

	return 0;
}

*/