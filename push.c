/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:36:03 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/09 19:11:01 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_stack	*src_head;

	if (!*src)
		return ;
	src_head = *src;
	*src = src_head->next;
	if (*src)
		(*src)->prev = NULL;
	if (!*dst)
	{
		*dst = src_head;
		(*dst)->next = NULL;
	}
	else
	{
		src_head->next = *dst;
		(*dst)->prev = src_head;
		*dst = src_head;
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pb\n");
}
