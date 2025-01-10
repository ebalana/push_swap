/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:26:36 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/10 14:24:23 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **head)
{
	int		len;
	t_stack	*first;
	t_stack	*second;

	len = stack_len(*head);
	if (!*head || len == 1)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	*head = second;
}

void	sa(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

//test
void print_stack(t_stack *stack)
{
    if (stack == NULL)
    {
        printf("Stack está vacío\n");
        return;
    }

    t_stack *current = stack;
    
    while (current != NULL)
    {
        printf("%ld ", current->num);
        current = current->next; 
    }
    printf("\n");
}