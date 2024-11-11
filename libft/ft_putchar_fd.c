/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:17:35 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:46:45 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_PUTCHAR_FD\n");
	// Teste 1: Escrever um caractere na saída padrão (stdout)
	ft_putchar_fd('A', 1);
	printf("\n"); // Para separar a saída no terminal

	// Teste 2: Escrever um caractere em um arquivo
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo");
		return (1);
	}
	ft_putchar_fd('B', fd);
	close(fd);

	// Verificar o conteúdo de "test_output.txt" para ver se contém "B".

	return 0;
}
*/