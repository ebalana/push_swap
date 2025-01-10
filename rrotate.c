/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:01:58 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/09 19:11:11 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_stack **head)
{
	t_stack	*new_head;
	t_stack	*new_second;
	int		len;

	len = stack_len(*head);
	if (!*head || len == 1)
		return ;
	new_second = *head;
	new_head = find_last(*head);
	*head = new_head;
	new_head->prev->next = NULL;
	new_head->next = new_second;
	new_second->prev = new_head;
	new_head->prev = NULL;
}

void	rra(t_stack **stack_a)
{
	rrotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	rrotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rrotate(stack_a);
	rrotate(stack_b);
	ft_printf("rrr\n");
}
