/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:36:59 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/09 19:11:04 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **head)
{
	t_stack	*new_last;
	t_stack	*last_node;
	int		len;

	len = stack_len(*head);
	if (!*head || len == 1)
		return ;
	new_last = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	last_node = find_last(*head);
	last_node->next = new_last;
	new_last->prev = last_node;
	new_last->next = NULL;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
