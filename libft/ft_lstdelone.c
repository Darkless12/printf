/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:19:12 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:53:01 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
#include "libft.h"

// Função para imprimir o conteúdo da lista (assumindo que é um inteiro)
void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("Content: %d\n", *(int *)(lst->content));  
		// Imprime o conteúdo do nó
		lst = lst->next;
	}
}

// Função para deletar o conteúdo (aqui, libera a memória alocada)
void	del_content(void *content)
{
	free(content);
}

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_LSTDELONE\n");
	// Criando os nós
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	// Inicializando a lista com o primeiro nó
	t_list *list = node1;
	node1->next = node2;
	node2->next = NULL;

	// Imprimindo a lista antes de deletar
	printf("Before deletion:\n");
	print_list(list);  // Espera-se a saída: 42, 36

	// Teste: Deletar o primeiro nó da lista (node1)
	ft_lstdelone(node1, del_content);  // Deleta o node1

	// Após deletar, node1 foi liberado. A lista continua com o segundo nó.
	// Atualizando a lista para não apontar para o nó deletado
	list = node2; // A lista agora deve apontar para node2.

	// Imprimindo a lista após deletar o primeiro nó
	printf("After deletion:\n");
	print_list(list);  // Espera-se a saída: 36

	// Liberando o conteúdo restante da lista
	ft_lstdelone(node2, del_content);  // Deleta o node2

	return 0;
}

*/