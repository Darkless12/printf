/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:39:25 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:55:44 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_ISPRINT\n");
	printf("Testes com caracteres imprimíveis\n");
	printf("Testando 'A': %d\n", ft_isprint('A')); // Esperado: 1
	printf("Testando 'z': %d\n", ft_isprint('z')); // Esperado: 1
	printf("Testando '0': %d\n", ft_isprint('0')); // Esperado: 1
	printf("Testando '@': %d\n", ft_isprint('@')); // Esperado: 1

	printf("Testes com caracteres não imprimíveis\n");
	printf("Testando 31: %d\n", ft_isprint(31)); // Esperado: 0
	printf("Testando 127: %d\n", ft_isprint(127)); // Esperado: 0
	printf("Testando 128: %d\n", ft_isprint(128)); // Esperado: 0

	printf("Testes com espaço e caractere de controle\n");
	printf("Testando ' ': %d\n", ft_isprint(' ')); // Esperado: 1
	printf("Testando '\\t': %d\n", ft_isprint('\t')); // Esperado: 0

	return 0;
}
*/