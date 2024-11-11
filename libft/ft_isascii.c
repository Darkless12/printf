/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:12:57 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:56:38 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_ISASCII\n");
	printf("Testes com caracteres ASCII válidos\n");
	printf("Testando 'A': %d\n", ft_isascii('A')); // Esperado: 1
	printf("Testando 'z': %d\n", ft_isascii('z')); // Esperado: 1
	printf("Testando '0': %d\n", ft_isascii('0')); // Esperado: 1
	printf("Testando '@': %d\n", ft_isascii('@')); // Esperado: 1

	printf("Testes com caracteres fora do intervalo ASCII válido\n");
	printf("Testando 128: %d\n", ft_isascii(128)); // Esperado: 0
	printf("Testando 255: %d\n", ft_isascii(255)); // Esperado: 0

	printf("Testes com caracteres no intervalo ASCII de controle\n");
	printf("Testando 0 (NUL): %d\n", ft_isascii(0)); // Esperado: 1
	printf("Testando 127 (DEL): %d\n", ft_isascii(127)); // Esperado: 1

	return 0;
}
*/