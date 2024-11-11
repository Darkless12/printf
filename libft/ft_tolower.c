/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:13:18 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:30:14 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_TOLOWER\n");
	printf("Testes com letras maiúsculas\n");
	printf("Testando 'A': %c\n", ft_tolower('A')); // Esperado: 'a'
	printf("Testando 'M': %c\n", ft_tolower('M')); // Esperado: 'm'
	printf("Testando 'Z': %c\n", ft_tolower('Z')); // Esperado: 'z'

	printf("Testes com letras minúsculas (sem alteração)\n");
	printf("Testando 'a': %c\n", ft_tolower('a')); // Esperado: 'a'
	printf("Testando 'z': %c\n", ft_tolower('z')); // Esperado: 'z'

	printf("Testes com caracteres não alfabéticos (sem alteração)\n");
	printf("Testando '1': %c\n", ft_tolower('1')); // Esperado: '1'
	printf("Testando '!': %c\n", ft_tolower('!')); // Esperado: '!'
	printf("Testando ' ': %c\n", ft_tolower(' ')); // Esperado: ' '

	printf("Teste com um caractere fora do intervalo ASCII padrão\n");
	printf("Testando 128: %c\n", ft_tolower(128)); 
		// Esperado: 128 (sem alteração)

	return 0;
}
*/