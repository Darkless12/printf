/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:04:50 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:34:18 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include "libft.h"

  
// Callback para converter letras em maiúsculas nos índices pares
void to_upper_even_indices(unsigned int index, char *c)
{
	if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32; // Converte para maiúscula
}

// Callback para substituir cada caractere pelo índice
void replace_with_index(unsigned int index, char *c)
{
	*c = '0' + (index % 10); //Substitui por índice módulo 10 
	//(para não ultrapassar '9')
}

int main()
{
	char str1[] = "hello world";
	char str2[] = "abcdefg";
	char str3[] = "";

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_STRITERI\n");
	// Teste 1: Converter caracteres em índices pares para maiúsculas
	ft_striteri(str1, to_upper_even_indices);
	printf("ft_striteri(\"hello world\", to_upper_even_indices) = %s\n", str1);

	// Teste 2: Substituir cada caractere pelo índice (módulo 10)
	ft_striteri(str2, replace_with_index);
	printf("ft_striteri(\"abcdefg\", replace_with_index) = %s\n", str2);

	// Teste 3: String vazia (não deve alterar nada)
	ft_striteri(str3, to_upper_even_indices);
	printf("ft_striteri(\"\", to_upper_even_indices) = \"%s\"\n", str3);

	return 0;
}

*/