/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:46:29 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 11:40:01 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (node);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("Content: %p\n", lst->content);  
		// Imprime o conteúdo do nó (pointer)
		lst = lst->next;
	}
}

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_LSTNEW\n");
	// Teste 1: Criar um novo nó com conteúdo específico
	int *value = (int *)malloc(sizeof(int));  
	// Aloca um valor inteiro
	*value = 42;  // Define o valor do conteúdo

	t_list *new_node = ft_lstnew(value);
	if (new_node == NULL)
	{
		printf("Erro ao criar novo nó!\n");
		return (1);
	}

	printf("Teste 1 - Novo nó criado com conteúdo:");
	printf("%d\n", *(int *)(new_node->content));
	print_list(new_node); // Deveria imprimir o conteúdo do nó: 42

	// Teste 2: Criar um nó com conteúdo NULL
	t_list *new_node_null = ft_lstnew(NULL);
	if (new_node_null == NULL)
	{
		printf("Erro ao criar nó com conteúdo NULL!\n");
		return (1);
	}

	printf("Teste 2 - Novo nó criado com conteúdo NULL\n");
	print_list(new_node_null);  
	// Deveria imprimir NULL para o conteúdo do nó

	// Teste 3: Teste de memória falha
	t_list *test_node = ft_lstnew(NULL);
	if (test_node == NULL)
	{
		printf("Erro ao alocar memória para o nó.\n");
		return (1);
	}

	return 0;
}

*/