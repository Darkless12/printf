/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:24:55 by ddiogo-f          #+#    #+#             */
/*   Updated: 2024/11/08 14:25:35 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*last_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_node;
		else
			last_node->next = new_node;
		last_node = new_node;
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>
#include "libft.h"

// Função que será aplicada a cada conteúdo da lista
void *increment(void *content)
{
	int *value = (int *)content;
	(*value)++;
	return content;
}

// Função para liberar o conteúdo da lista (quando ocorrer erro)
void del(void *content)
{
	free(content);
}

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_LSTMAP\n");
	// Criando dois nós da lista com inteiros como conteúdo
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	// Inicializando a lista com os nós
	t_list *list = node1;
	node1->next = node2;
	node2->next = NULL;

	// Testando a função ft_lstmap
	t_list *new_list = ft_lstmap(list, increment, del);

	// Imprimindo os novos valores da lista mapeada
	t_list *temp = new_list;
	while (temp)
	{
		printf("New Content: %d\n", *(int *)(temp->content));
		temp = temp->next;
	}

	// Liberando a memória alocada para os nós
	ft_lstclear(&new_list, del);

	return 0;
}

*/