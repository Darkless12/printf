# Variáveis
NAME = libfprintf.a
MAKE = make
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft        # Diretório onde está o Makefile da libft
LIBFT = $(LIBFT_DIR)/libft.a  # Caminho completo para libft.a
SRCS = ft_printf.c       # Adicione aqui mais arquivos para o ft_printf se necessário
OBJS = $(SRCS:.c=.o)


# Regra padrão
all: $(NAME) $(LIBFT) 

# Compila libfprintf.a
$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

# Chama o Makefile da libft para garantir que libft.a está atualizada
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Remove arquivos .o
clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

# Remove arquivos .o e a biblioteca
fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

# Recompila tudo do zero
re: fclean all

# Impede que o Makefile trate estas palavras como nomes de arquivos
.PHONY: all clean fclean re
