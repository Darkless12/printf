/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:13:54 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:51:10 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
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
	return (temp);
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

	printf("\n\nFT_LSTLAST\n");
	// Criando os nós
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	t_list *node3 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node3->content) = 99;

	// Inicializando a lista com o primeiro nó
	t_list *list = node1;
	node1->next = node2;
	node2->next = node3;

	// Teste: Verificar o último nó
	t_list *last = ft_lstlast(list);
	printf("Último nó da lista: %d\n", *(int *)(last->content));  
	// Espera-se o valor 99

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