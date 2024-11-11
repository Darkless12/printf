/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:52:17 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:37:58 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_PUTSTR_FD\n");
	// Teste 1: Escrever uma string na saída padrão (stdout)
	ft_putstr_fd("Hello, World!", 1);
	printf("\n"); // Para separar a saída no terminal

	// Teste 2: Escrever uma string em um arquivo
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo");
		return (1);
	}
	ft_putstr_fd("Writing to a file!", fd);
	close(fd);

	// Verificar conteúdo "test_output.txt" p/ ver se em "Writing to a file!".

	return 0;
}

*/