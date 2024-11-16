#include <limits.h>
#include "ft_printf.h"
#include <stdio.h>

int	main()
{
    int a = -1;

    printf("chars: %d\n", ft_printf(" %p ", (void *)&a));
    printf("chars: %d\n", printf(" %p ", (void *)&a));
/*
    printf("chars: %d\n", ft_printf(" %d \n", -2147483647 - 1));
    printf("chars: %d\n", printf(" %d \n", -2147483647 - 1));
    */
    //printf("%d", ft_printf(" NULL %s NULL ", NULL));
    //printf("%d", printf(" NULL %s NULL ", NULL));
/*
	// Teste com caractere ASCII imprimível
	ft_printf("\nTESTANDO %%c\n");
    printf("Retorno: %d\n", ft_printf("Caractere: %c\n", 'A'));
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

    printf("Retorno: %d\n", ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
    printf("Retorno esperado: %d\n", printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

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

	ft_printf("\nTESTANDO %%x\n");
	// Teste básico com valor zero
    printf("Retorno: %d\n", ft_printf("ft_printf: %x\n", 0));
    printf("Retorno esperado: %d\n", printf("printf:    %x\n", 0));
    // Teste com valor pequeno
    printf("Retorno: %d\n", ft_printf("ft_printf: %x\n", 1));
    printf("Retorno esperado: %d\n", printf("printf:    %x\n", 1));
    // Teste com valor de um dígito em hexadecimal
    printf("Retorno: %d\n", ft_printf("ft_printf: %x\n", 10));
    printf("Retorno esperado: %d\n", printf("printf:    %x\n", 10));
    // Teste com 0xFF
    printf("Retorno: %d\n", ft_printf("ft_printf: %x\n", 255));
    printf("Retorno esperado: %d\n", printf("printf:    %x\n", 255));
    // Teste com valor aleatório 0xBEEF
    printf("Retorno: %d\n", ft_printf("ft_printf: %x\n", 48879));
    printf("Retorno esperado: %d\n", printf("printf:    %x\n", 48879));
    // Teste com UINT_MAX (4294967295 em decimal, 0xFFFFFFFF em hexadecimal)
    printf("Retorno: %d\n", ft_printf("ft_printf: %x\n", 4294967295U));
    printf("Retorno esperado: %d\n", printf("printf:    %x\n", 4294967295U));

	ft_printf("\nTESTANDO %%X\n");
	// Teste básico com valor zero
    printf("Retorno: %d\n", ft_printf("ft_printf: %X\n", 0));
    printf("Retorno esperado: %d\n", printf("printf:    %X\n", 0));
    // Teste com valor pequeno
    printf("Retorno: %d\n", ft_printf("ft_printf: %X\n", 1));
    printf("Retorno esperado: %d\n", printf("printf:    %X\n", 1));
    // Teste com valor de um dígito em hexadecimal
    printf("Retorno: %d\n", ft_printf("ft_printf: %X\n", 10));
    printf("Retorno esperado: %d\n", printf("printf:    %X\n", 10));
    // Teste com 0xFF
    printf("Retorno: %d\n", ft_printf("ft_printf: %X\n", 255));
    printf("Retorno esperado: %d\n", printf("printf:    %X\n", 255));
    // Teste com valor aleatório 0xBEEF
    printf("Retorno: %d\n", ft_printf("ft_printf: %X\n", 48879));
    printf("Retorno esperado: %d\n", printf("printf:    %X\n", 48879));
    // Teste com UINT_MAX (4294967295 em decimal, 0xFFFFFFFF em hexadecimal)
    printf("Retorno: %d\n", ft_printf("ft_printf: %X\n", 4294967295U));
    printf("Retorno esperado: %d\n", printf("printf:    %X\n", 4294967295U));
*/
    return 0;
}