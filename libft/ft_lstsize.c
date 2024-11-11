/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:50:59 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:48:59 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	if (!lst)
		return (0);
	i = 1;
	temp = lst;
	while (temp->next != 0)
	{
		temp = temp->next;
		i++;
	}
	return (i);
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

	printf("\n\nFT_LSTSIZE\n");
	// Teste 1: Criar a lista e adicionar novos nós à frente
	// Criando os nós
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	t_list *node3 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node3->content) = 99;

	// Inicializando a lista com um único nó
	t_list *list = node1;

	// Imprimindo a lista antes de adicionar qualquer nó
	printf("Antes de adicionar mais nós:\n");
	print_list(list);
	printf("Tamanho da lista: %d\n", ft_lstsize(list));

	// Adicionando o segundo nó à frente
	ft_lstadd_front(&list, node2);
	printf("Depois de adicionar um nó à frente:\n");
	print_list(list);
	printf("Tamanho da lista: %d\n", ft_lstsize(list));

	// Adicionando o terceiro nó à frente
	ft_lstadd_front(&list, node3);
	printf("Depois de adicionar outro nó à frente:\n");
	print_list(list);
	printf("Tamanho da lista: %d\n", ft_lstsize(list));

	// Teste 2: Lista com apenas um nó
	t_list *single_node = ft_lstnew(malloc(sizeof(int)));
	*(int *)(single_node->content) = 15;
	printf("Lista com um nó:\n");
	printf("Tamanho da lista: %d\n", ft_lstsize(single_node));

	// Teste 3: Lista vazia (NULL)
	printf("Tamanho da lista vazia: %d\n", ft_lstsize(NULL));

	// Liberação de memória
	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(single_node->content);
	free(node1);
	free(node2);
	free(node3);
	free(single_node);

	return 0;
}

*/