/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiogo-f <ddiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:27:36 by darkless12        #+#    #+#             */
/*   Updated: 2024/11/07 10:51:27 by ddiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != 0)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
#include "libft.h"

// Função que será aplicada a cada conteúdo da lista
void	print_content(void *content)
{
	printf("Content: %d\n", *(int*)content);
}

int main()
{

	// cc -Wall -Wextra -Werror testador.c libft.a

	printf("\n\nFT_LSTITER\n");
	// Criando dois nós da lista com inteiros como conteúdo
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 42;

	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 36;

	// Inicializando a lista com os nós
	t_list *list = node1;
	node1->next = node2;
	node2->next = NULL;

	// Testando a função ft_lstiter
	ft_lstiter(list, print_content);  
	// Espera-se a saída: Content: 42, Content: 36

	// Liberando a memória alocada para os nós
	free(node1->content);
	free(node2->content);
	free(node1);
	free(node2);

	return 0;
}

*/