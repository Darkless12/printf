/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:02:26 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:45:23 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_PUNTENDL_FD\n");
	// Teste 1: Escrever uma string com uma nova linha na saída padrão (stdout)
	ft_putendl_fd("Hello, World!", 1);

	// Teste 2: Escrever uma string com uma nova linha em um arquivo
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo");
		return (1);
	}
	ft_putendl_fd("Writing to a file with newline!", fd);
	close(fd);

	// Verificar conteúdo de "test_output.txt" para ver se
	// contém "Writing to a file with newline!" seguido de uma nova linha.

	return 0;
}

*/