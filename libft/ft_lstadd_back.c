/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:19:57 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:55:08 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		temp = *lst;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
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

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_LSTADD_BACK\n");
	// Criando os nós
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	t_list *node3 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node3->content) = 99;

	// Inicializando a lista com o primeiro nó
	t_list *list = node1;
	node1->next = NULL;

	// Teste: Adicionar novo nó no final da lista
	ft_lstadd_back(&list, node2);  // Deve adicionar node2 no final
	ft_lstadd_back(&list, node3);  // Deve adicionar node3 no final

	// Imprimindo a lista
	print_list(list);  // Espera-se a saída: 42, 36, 99

	// Liberando memória
	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(node1);
	free(node2);
	free(node3);

	return 0;
}

*/