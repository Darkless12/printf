/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:03:07 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:54:07 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Função auxiliar para imprimir os valores da lista
void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("Content: %d\n", *(int *)(lst->content));  
		// Imprime o conteúdo do nó (assumindo que é um número inteiro)
		lst = lst->next;
	}
	printf("-------\n");
}

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_LSTADD_FRONT\n");
	// Teste 1: Criar a lista e adicionar novos nós à frente
	// Criando os primeiros nós
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	// Inicializando a lista com um único nó
	t_list *list = node1;
	
	// Imprimindo a lista antes de adicionar qualquer nó
	printf("Antes de adicionar à frente:\n");
	print_list(list);
	
	// Adicionando um novo nó à frente da lista
	ft_lstadd_front(&list, node2);

	// Imprimindo a lista após adicionar o nó à frente
	printf("Depois de adicionar à frente:\n");
	print_list(list);

	// Teste 2: Adicionando mais um nó à frente
	t_list *node3 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node3->content) = 99;

	ft_lstadd_front(&list, node3);

	// Imprimindo a lista após adicionar o terceiro nó à frente
	printf("Depois de adicionar outro nó à frente:\n");
	print_list(list);

	// Liberação de memória
	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(node1);
	free(node2);
	free(node3);

	return 0;
}

*/