# Variáveis
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_printf.c \
		ft_putstr_printf.c \
		ft_putchar_printf.c \
		ft_strlen_printf.c \
		ft_puthex_printf.c \
		ft_putint_printf.c \
		ft_putptr_printf.c
OBJS = $(SRCS:.c=.o)


# Regra padrão
all: $(NAME)

# Compila libfprintf.a
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Remove arquivos .o
clean:
	rm -f $(OBJS)

# Remove arquivos .o e a biblioteca
fclean: clean
	rm -f $(NAME)

# Recompila tudo do zero
re: fclean all

# Impede que o Makefile trate estas palavras como nomes de arquivos
.PHONY: all clean fclean re
