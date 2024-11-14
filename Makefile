# Variáveis
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_printf.c \
		ft_putstr_pf.c \
		ft_putchar_pf.c \
		ft_strlen_pf.c \
		ft_put_hex_pf.c \
		ft_put_nbr_pf.c
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
