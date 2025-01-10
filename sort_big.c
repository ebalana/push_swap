/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:02:15 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/10 13:48:29 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	make_index(t_stack **stack, int size)
{
	t_stack	*min;
	t_stack	*max;
	int		i;

	i = 0;
	while (i < size)
	{
		min = find_min(*stack);
		min->num = LONG_MAX - (1 + i);
		i++;
	}
	i = 0;
	while (i < size)
	{
		max = find_max(*stack);
		max->num = i;
		i++;
	}
}

void	sort_big(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	bit_pos;
	int	i;

	size = stack_len(*stack_a);
	make_index(stack_a, size);
	bit_pos = 0;
	while (check_sorted(*stack_a))
	{
		i = 0;
		while (i++ < size)
		{
			if ((((*stack_a)->num >> bit_pos) & 1) == 0)
				pb(stack_b, stack_a);
			else
				ra(stack_a);
		}
		while (stack_len(*stack_b) > 0)
			pa(stack_a, stack_b);
		bit_pos++;
	}
}
