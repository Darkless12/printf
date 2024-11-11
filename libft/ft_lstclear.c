/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:56:44 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/08 13:07:58 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(temp, del);
	}
}

/*
#include <stdio.h>
#include "libft.h"

// Função para imprimir a lista
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

	printf("\n\nFT_LSTCLEAR\n");
	// Criando os nós
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	// Inicializando a lista com o primeiro nó
	t_list *list = node1;
	node1->next = node2;
	node2->next = NULL;

	// Imprimindo a lista antes de limpar
	printf("Before clear:\n");
	print_list(list);  // Espera-se a saída: 42, 36

	// Teste: Limpar a lista
	ft_lstclear(&list, del_content);

	// Após limpar, a lista deve ser NULL
	printf("After clear:\n");
	if (list == NULL)
		printf("List is NULL\n");  // Espera-se: List is NULL

	return 0;
}

*/