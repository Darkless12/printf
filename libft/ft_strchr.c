/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:28 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 15:04:40 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*str;
	unsigned char	letter;

	i = 0;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (str[i] != '\0')
	{
		if (str[i] == letter)
			return ((char *)&str[i]);
		i++;
	}
	if (letter == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_STRCHR\n");
	printf("Testes com caracteres presentes na string\n");
	printf("Testando 'a' em 'banana': %s\n", ft_strchr("banana", 'a')); 
		// Esperado: "banana"
	printf("Testando 'n' em 'banana': %s\n", ft_strchr("banana", 'n')); 
		// Esperado: "nana"
	printf("Testando 'b' em 'banana': %s\n", ft_strchr("banana", 'b')); 
		// Esperado: "banana"

	printf("Testes com caracteres ausentes na string\n");
	printf("Testando 'z' em 'banana': %s\n", ft_strchr("banana", 'z')); 
		// Esperado: NULL
	printf("Testando 'x' em 'banana': %s\n", ft_strchr("banana", 'x')); 
		// Esperado: NULL

	printf("Teste com o caractere nulo ('\\0')\n");
	printf("Testando '\\0' em 'banana': %s\n", ft_strchr("banana", '\0')); 
		// Esperado: "banana\0"

	return 0;
}
*/