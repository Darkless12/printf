/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:46:17 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:28:41 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_TOUPPER\n");
	printf("Testes com letras minúsculas\n");
	printf("Testando 'a': %c\n", ft_toupper('a')); // Esperado: 'A'
	printf("Testando 'm': %c\n", ft_toupper('m')); // Esperado: 'M'
	printf("Testando 'z': %c\n", ft_toupper('z')); // Esperado: 'Z'

	printf("Testes com letras maiúsculas (sem alteração)\n");
	printf("Testando 'A': %c\n", ft_toupper('A')); // Esperado: 'A'
	printf("Testando 'Z': %c\n", ft_toupper('Z')); // Esperado: 'Z'

	printf("Testes com caracteres não alfabéticos (sem alteração)\n");
	printf("Testando '1': %c\n", ft_toupper('1')); // Esperado: '1'
	printf("Testando '!': %c\n", ft_toupper('!')); // Esperado: '!'
	printf("Testando ' ': %c\n", ft_toupper(' ')); // Esperado: ' '

	printf("Teste com um caractere fora do intervalo ASCII padrão\n");
	printf("Testando 128: %c\n", ft_toupper(128)); 
		// Esperado: 128 (sem alteração)

	return 0;
}
*/