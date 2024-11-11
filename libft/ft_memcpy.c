/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:45:45 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/07 14:09:25 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src && n > 0)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*

#include <stdio.h>
#include "libft.h"

int main()
{
	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_MEMCPY\n");

	printf("Testando cópia de memória com sobreposição\n");
	char dest1[10] = "123456789";
	char src1[10] = "abcdefghi";
	ft_memcpy(dest1, src1, 5);
	printf("Resultado após ft_memcpy (primeiros 5 caracteres");
	printf(" copiados): '%s'\n", dest1);
		// Esperado: "abcde6789" (primeiros 5 chr de src copiados para dest)

	printf("Testando cópia de memória com zero de comprimento\n");
	char dest3[10] = "abcdefghi";
	char src3[10] = "123456789";
	ft_memcpy(dest3, src3, 0);
	printf("Resultado após ft_memcpy (n=0):");
	printf(" '%s'\n", dest3);
		// Esperado: "abcdefghi" (não houve cópia, dest permanece igual)

	printf("Testando cópia de memória com caracteres nulos\n");
	char dest4[10] = "abcdefghi";
	char src4[10] = "\0xyzxyzxyz";
	ft_memcpy(dest4, src4, 4);
	printf("Resultado após ft_memcpy (primeiros 4 caracteres");
	printf(" copiados): '%s'\n", dest4);
		// Esperado: "\0xyzfghi" (os primeiros 4 chr de src copiados para dest)

	return 0;
}

*/