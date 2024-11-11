/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:50:05 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:56:21 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_ISDIGIT\n");
	printf("Testes com dígitos\n");
	printf("Testando '0': %d\n", ft_isdigit('0')); // Esperado: 1
	printf("Testando '5': %d\n", ft_isdigit('5')); // Esperado: 1
	printf("Testando '9': %d\n", ft_isdigit('9')); // Esperado: 1

	printf("Testes com caracteres não numéricos\n");
	printf("Testando 'a': %d\n", ft_isdigit('a')); // Esperado: 0
	printf("Testando ' ': %d\n", ft_isdigit(' ')); // Esperado: 0
	printf("Testando '-': %d\n", ft_isdigit('-')); // Esperado: 0
	printf("Testando '@': %d\n", ft_isdigit('@')); // Esperado: 0

	printf("Teste com um caractere fora do intervalo ASCII padrão\n");
	printf("Testando 128: %d\n", ft_isdigit(128)); // Esperado: 0

	return 0;
}
*/