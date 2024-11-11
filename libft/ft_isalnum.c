/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:04:31 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:57:58 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) + ft_isdigit(c));
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_ISALNUM\n");
	printf("Testes com caracteres alfabéticos\n");
	printf("Testando 'a': %d\n", ft_isalnum('a')); // Esperado: 1
	printf("Testando 'z': %d\n", ft_isalnum('z')); // Esperado: 1
	printf("Testando 'A': %d\n", ft_isalnum('A')); // Esperado: 1
	printf("Testando 'Z': %d\n", ft_isalnum('Z')); // Esperado: 1

	printf("Testes com dígitos\n");
	printf("Testando '0': %d\n", ft_isalnum('0')); // Esperado: 1
	printf("Testando '5': %d\n", ft_isalnum('5')); // Esperado: 1
	printf("Testando '9': %d\n", ft_isalnum('9')); // Esperado: 1

	printf("Testes com caracteres não alfanuméricos\n");
	printf("Testando ' ': %d\n", ft_isalnum(' ')); // Esperado: 0
	printf("Testando '!': %d\n", ft_isalnum('!')); // Esperado: 0
	printf("Testando '@': %d\n", ft_isalnum('@')); // Esperado: 0

	printf("Teste com um caractere fora do intervalo ASCII padrão\n");
	printf("Testando 128: %d\n", ft_isalnum(128)); // Esperado: 0

	return 0;
}
*/