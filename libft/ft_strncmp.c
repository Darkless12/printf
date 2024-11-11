/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:53:24 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 15:06:34 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((unsigned int)i < n - 1)
	{
		if (str1[i] == '\0' || str2[i] == '\0' || str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

    printf("\n\nFT_STRNCMP\n");
    printf("Testes com strings iguais\n");
    printf("Testando 'banana' e 'banana' (n=6):");
	printf(" %d\n", ft_strncmp("banana", "banana", 6)); 
        // Esperado: 0
    printf("Testando 'Hello' e 'Hello' (n=5):");
	printf(" %d\n", ft_strncmp("Hello", "Hello", 5)); 
        // Esperado: 0

    printf("Testes com strings diferentes\n");
    printf("Testando 'banana' e 'banane' (n=6):");
	printf(" %d\n", ft_strncmp("banana", "banane", 6)); 
        // Esperado: 0 (até o 6º caractere, as strings são iguais)
    printf("Testando 'banana' e 'banana' (n=4):");
	printf(" %d\n", ft_strncmp("banana", "banana", 4)); 
        // Esperado: 0 (primeiros 4 caracteres iguais)
    printf("Testando 'abc' e 'def' (n=3):");
	printf(" %d\n", ft_strncmp("abc", "def", 3)); 
        // Esperado: valor negativo (primeiros caracteres diferentes)

    printf("Testes com strings que terminam antes de 'n' caracteres\n");
    printf("Testando 'banana' e 'ban' (n=6):");
	printf(" %d\n", ft_strncmp("banana", "ban", 6)); 
        // Esperado: valor positivo (porque 'n' termina antes de 'banana')
    printf("Testando '42 Lisboa' e '42 Li' (n=6):");
	printf(" %d\n", ft_strncmp("42 Lisboa", "42 Li", 6)); 
        // Esperado: valor positivo (porque '42 Lisboa' é maior que '42 Li')

    return 0;
}

*/