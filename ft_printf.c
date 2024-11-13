/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkless12 <darkless12@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:25:59 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/13 21:55:33 by darkless12       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"
#include <stdio.h>

int	find_type(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (c == (char)str[i])
			return (1);
		i++;
	}
	return (0);
}

void	send_by_type(int nbr, char type)
{
	if (type == 'c')
		ft_putchar_fd((char)nbr, 1);
	if (type == 'd' || type == 'i')
		ft_putnbr_fd((int)nbr, 1);
}

void	ft_put_uint_fd(unsigned int n, char type, int fd)
{
	char			*base_char;
	unsigned int	base;

	if (type == 'x')
		base_char = "0123456789abcdef";
	else if (type == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789";
	base = ft_strlen(base_char);
	if (n >= base)
	{
		if (n / base < base && type != 'u')
			ft_putstr_fd("0x", 1);
		ft_put_uint_fd(n / base, type, fd);
		ft_put_uint_fd(n % base, type, fd);
	}
	else
	{
		ft_putchar_fd((char)base_char[n], fd);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	boxofvars;
	int		i;

	va_start(boxofvars, str);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			i++;
			if (find_type(str[i], "cdi") == 1)
				send_by_type(va_arg(boxofvars, int), str[i]);
			else if(find_type(str[i], "uxX") == 1)
				ft_put_uint_fd(va_arg(boxofvars, int), (char)str[i], 1);
			else if (str[i] == 's')
				ft_putstr_fd(va_arg(boxofvars, char *), 1);
		}
		if (str[i] != '%' || (str[i] == '%' && str[i - 1] == '%'))
			ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i - 1);
}

int	main()
{
	// Teste com caractere ASCII imprimível
	ft_printf("TESTANDO %%c");
    /*printf("Retorno: %d\n", ft_printf("Caractere: %c\n", 'A'));
    printf("Retorno esperado: %d\n", printf("Caractere: %c\n", 'A'));
    // Teste com caractere ASCII não imprimível (null character)
    printf("Retorno: %d\n", ft_printf("Caractere: %c\n", '\0'));
    printf("Retorno esperado: %d\n", printf("Caractere: %c\n", '\0'));
    // Teste com espaço em branco
    printf("Retorno: %d\n", ft_printf("Caractere: %c\n", ' '));
    printf("Retorno esperado: %d\n", printf("Caractere: %c\n", ' '));
    // Teste com caractere especial
    printf("Retorno: %d\n", ft_printf("Caractere especial: %c\n", '@'));
    printf("Retorno esperado: %d\n", printf("Caractere especial: %c\n", '@'));
    // Teste com caractere de nova linha
    printf("Retorno: %d\n", ft_printf("Caractere: %c\n", '\n'));
    printf("Retorno esperado: %d\n", printf("Caractere: %c\n", '\n'));
    // Teste com valor máximo de um `unsigned char`
    printf("Retorno: %d\n", ft_printf("Valor máximo de char: %c\n", (unsigned char)255));
    printf("Retorno esperado: %d\n", printf("Valor máximo de char: %c\n", (unsigned char)255));
    // Teste com valor mínimo de um `char` (0)
    printf("Retorno: %d\n", ft_printf("Valor mínimo de char: %c\n", (char)0));
    printf("Retorno esperado: %d\n", printf("Valor mínimo de char: %c\n", (char)0));

	ft_printf("\nTESTANDO %%d\n");
	// Teste com valores positivos
    printf("Retorno: %d\n", ft_printf("Valor positivo: %d\n", 123));
    printf("Retorno esperado: %d\n", printf("Valor positivo: %d\n", 123));
    // Teste com valores negativos
    printf("Retorno: %d\n", ft_printf("Valor negativo: %d\n", -456));
    printf("Retorno esperado: %d\n", printf("Valor negativo: %d\n", -456));
    // Teste com valor zero
    printf("Retorno: %d\n", ft_printf("Zero: %d\n", 0));
    printf("Retorno esperado: %d\n", printf("Zero: %d\n", 0));
    // Teste com valor INT_MAX
    printf("Retorno: %d\n", ft_printf("INT_MAX: %d\n", INT_MAX));
    printf("Retorno esperado: %d\n", printf("INT_MAX: %d\n", INT_MAX));
    // Teste com valor INT_MIN
    printf("Retorno: %d\n", ft_printf("INT_MIN: %d\n", INT_MIN));
    printf("Retorno esperado: %d\n", printf("INT_MIN: %d\n", INT_MIN));
    // Teste com múltiplos %d
    printf("Retorno: %d\n", ft_printf("Primeiro: %d, Segundo: %d, Terceiro: %d\n", 1, -2, 3));
    printf("Retorno esperado: %d\n", printf("Primeiro: %d, Segundo: %d, Terceiro: %d\n", 1, -2, 3));
    // Teste com %d e outros especificadores
    printf("Retorno: %d\n", ft_printf("Número: %d, Letra: %c, String: %s\n", 42, 'A', "Teste"));
    printf("Retorno esperado: %d\n", printf("Número: %d, Letra: %c, String: %s\n", 42, 'A', "Teste"));
    // Teste com strings de controle complicadas
    printf("Retorno: %d\n", ft_printf("Valor %d no início, e %d no fim\n", 10, 20));
    printf("Retorno esperado: %d\n", printf("Valor %d no início, e %d no fim\n", 10, 20));
    // Teste com %d sem nenhum valor fornecido (pode causar comportamento indefinido)
    printf("Retorno: %d\n", ft_printf("Sem valor para %%d: %d\n"));
    //printf("Retorno esperado: %d\n", printf("Sem valor para %%d: %d\n"));

	ft_printf("\nTESTANDO %%i\n");
	// Teste com um número positivo
    printf("Retorno: %d\n", ft_printf("Número positivo: %i\n", 123));
    printf("Retorno esperado: %d\n", printf("Número positivo: %i\n", 123));
    // Teste com um número negativo
    printf("Retorno: %d\n", ft_printf("Número negativo: %i\n", -456));
    printf("Retorno esperado: %d\n", printf("Número negativo: %i\n", -456));
    // Teste com zero
    printf("Retorno: %d\n", ft_printf("Número zero: %i\n", 0));
    printf("Retorno esperado: %d\n", printf("Número zero: %i\n", 0));
    // Teste com o valor máximo de int
    printf("Retorno: %d\n", ft_printf("Valor máximo de int: %i\n", INT_MAX));
    printf("Retorno esperado: %d\n", printf("Valor máximo de int: %i\n", INT_MAX));
    // Teste com o valor mínimo de int
    printf("Retorno: %d\n", ft_printf("Valor mínimo de int: %i\n", INT_MIN));
    printf("Retorno esperado: %d\n", printf("Valor mínimo de int: %i\n", INT_MIN));
    // Teste com um número grande positivo
    printf("Retorno: %d\n", ft_printf("Número grande positivo: %i\n", 214748364));
    printf("Retorno esperado: %d\n", printf("Número grande positivo: %i\n", 214748364));
    // Teste com um número grande negativo
    printf("Retorno: %d\n", ft_printf("Número grande negativo: %i\n", -214748364));
    printf("Retorno esperado: %d\n", printf("Número grande negativo: %i\n", -214748364));

	ft_printf("\nTESTANDO %%u\n");
	// Teste com zero
    printf("Retorno: %d\n", ft_printf("Número zero: %u\n", 0));
    printf("Retorno esperado: %d\n", printf("Número zero: %u\n", 0));
    // Teste com um número pequeno positivo
    printf("Retorno: %d\n", ft_printf("Número pequeno: %u\n", 123));
    printf("Retorno esperado: %d\n", printf("Número pequeno: %u\n", 123));
    // Teste com valor próximo de UINT_MAX / 2
    printf("Retorno: %d\n", ft_printf("Valor próximo de UINT_MAX/2: %u\n", UINT_MAX / 2));
    printf("Retorno esperado: %d\n", printf("Valor próximo de UINT_MAX/2: %u\n", UINT_MAX / 2));
    // Teste com valor um pouco abaixo de UINT_MAX
    printf("Retorno: %d\n", ft_printf("Valor um pouco abaixo de UINT_MAX: %u\n", UINT_MAX - 1));
    printf("Retorno esperado: %d\n", printf("Valor um pouco abaixo de UINT_MAX: %u\n", UINT_MAX - 1));
    // Teste com valor máximo de unsigned int (UINT_MAX)
    printf("Retorno: %d\n", ft_printf("Valor máximo de unsigned int: %u\n", UINT_MAX));
    printf("Retorno esperado: %d\n", printf("Valor máximo de unsigned int: %u\n", UINT_MAX));
*/
    return 0;
}