/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:50:54 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:57:16 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
#include <stdio.h>

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_FT_ISALPHA\n");
	// Testes com letras minúsculas
	printf("Testando 'a': %d\n", ft_isalpha('a')); // Esperado: 1
	printf("Testando 'z': %d\n", ft_isalpha('z')); // Esperado: 1

	// Testes com letras maiúsculas
	printf("Testando 'A': %d\n", ft_isalpha('A')); // Esperado: 1
	printf("Testando 'Z': %d\n", ft_isalpha('Z')); // Esperado: 1

	// Testes com caracteres não alfabéticos
	printf("Testando '0': %d\n", ft_isalpha('0')); // Esperado: 0
	printf("Testando '!': %d\n", ft_isalpha('!')); // Esperado: 0
	printf("Testando ' ': %d\n", ft_isalpha(' ')); // Esperado: 0
	printf("Testando '@': %d\n", ft_isalpha('@')); // Esperado: 0

	// Teste com um caractere fora do intervalo ASCII padrão
	printf("Testando 128: %d\n", ft_isalpha(128)); // Esperado: 0

	return 0;
}
*/