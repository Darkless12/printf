/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:04 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 15:07:08 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				lastpos;
	unsigned char	*str;
	unsigned char	letter;

	i = 0;
	lastpos = -1;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (str[i] != '\0')
	{
		if (str[i] == letter)
			lastpos = i;
		i++;
	}
	if (lastpos >= 0)
		return ((char *)&str[lastpos]);
	if (letter == '\0')
		return ((char *)&str[i]);
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_STRRCHR\n");
	printf("Testes com caracteres presentes na string\n");
	printf("Testando 'a' em 'banana': %s\n", ft_strrchr("banana", 'a')); 
		// Esperado: "ana"
	printf("Testando 'n' em 'banana': %s\n", ft_strrchr("banana", 'n')); 
		// Esperado: "na"
	printf("Testando 'b' em 'banana': %s\n", ft_strrchr("banana", 'b')); 
		// Esperado: "banana"

	printf("Testes com caracteres ausentes na string\n");
	printf("Testando 'z' em 'banana': %s\n", ft_strrchr("banana", 'z')); 
		// Esperado: NULL
	printf("Testando 'x' em 'banana': %s\n", ft_strrchr("banana", 'x')); 
		// Esperado: NULL

	printf("Teste com o caractere nulo ('\\0')\n");
	printf("Testando '\\0' em 'banana': %s\n", ft_strrchr("banana", '\0')); 
		// Esperado: "banana\0"

	return 0;
}
*/