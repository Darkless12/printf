#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	printf(" T - %d\n", printf(NULL));
	printf(" F - %d\n", ft_printf(NULL));
	return (0);
}
