/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:05:47 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 10:59:58 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_BZERO\n");

	printf("Testando com um array de caracteres\n");
	char str1[10] = "abcdefghi";
	ft_bzero(str1, 5);
	printf("Resultado após ft_bzero (primeiros 5 ");
	printf("caracteres zerados): '%s'\n", str1);
		// Esperado: "00000fghi" (os primeiros 5 caracteres serão '\0')

	printf("Testando com uma string já nula\n");
	char str2[10] = "\0abcdefg";
	ft_bzero(str2, 3);
	printf("Resultado após ft_bzero (primeiros 3 ");
	printf("caracteres zerados): '%s'\n", str2);
		// Esperado: "\0\0\0defg" (primeiros 3 caracteres são '\0')

	printf("Testando com o array inteiro sendo ");
	printf("zerado\n");
	char str3[10] = "123456789";
	ft_bzero(str3, 10);
	printf("Resultado após ft_bzero (tudo zerado):");
	printf(" '%s'\n", str3);
		// Esperado: "\0\0\0\0\0\0\0\0\0\0" (todos os caracteres serão '\0')

	printf("Testando com o array de tamanho 1\n");
	char str4[10] = "123456789";
	ft_bzero(str4, 1);
	printf("Resultado após ft_bzero (primeiro caractere");
	printf(" zerado): '%s'\n", str4);
		// Esperado: "\023456789" (somente o primeiro caractere será '\0')

	return 0;
}

*/