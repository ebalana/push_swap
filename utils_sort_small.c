/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_small.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:33:49 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/10 13:38:28 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pos_min(t_stack *stack)
{
	t_stack	*min;
	int		i;

	i = 0;
	min = find_min(stack);
	while (min->num != stack->num)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	pos_max(t_stack *stack)
{
	t_stack	*max;
	int		i;

	i = 0;
	max = find_max(stack);
	while (max->num != stack->num)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	put_min_top(t_stack **stack)
{
	int	size;

	size = stack_len(*stack);
	while (pos_min(*stack))
	{
		if (pos_min(*stack) <= (size / 2))
			ra(stack);
		else
			rra(stack);
	}
}

void	put_max_top(t_stack **stack)
{
	int	size;

	size = stack_len(*stack);
	while (pos_max(*stack))
	{
		if (pos_max(*stack) < (size / 2))
			ra(stack);
		else
			rra(stack);
	}
}
