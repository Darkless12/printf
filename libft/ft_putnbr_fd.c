/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:05:58 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:38:46 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = -147483648;
		}
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

/*
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_PUTNBR_FD\n");
	// Teste 1: Escrever um número inteiro positivo na saída 
	//padrão (stdout)
	ft_putnbr_fd(12345, 1); // Esperado: 12345

	// Teste 2: Escrever um número negativo na saída padrão (stdout)
	ft_putnbr_fd(-9876, 1); // Esperado: -9876

	// Teste 3: Escrever o número mínimo possível de um inteiro
	// (INT_MIN) na saída padrão
	ft_putnbr_fd(-2147483648, 1); // Esperado: -2147483648

	// Teste 4: Escrever um número em um arquivo
	int fd = open("test_number.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo");
		return (1);
	}
	ft_putnbr_fd(42, fd); // Esperado: 42
	close(fd);

	// Teste 5: Escrever outro número em um arquivo
	fd = open("test_number.txt", O_WRONLY | O_APPEND, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo");
		return (1);
	}
	ft_putnbr_fd(-12345, fd); // Esperado: -12345
	close(fd);

	return 0;
}

*/