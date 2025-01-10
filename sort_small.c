/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 21:54:25 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/09 19:11:16 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack)
{
	t_stack	*max;

	if (!*stack)
		return ;
	max = find_max(*stack);
	if ((*stack)->num == max->num)
		ra(stack);
	else if ((*stack)->next->num == max->num)
		rra(stack);
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
}

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	put_min_top(stack_a);
	pb(stack_b, stack_a);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	put_max_top(stack_a);
	pb(stack_b, stack_a);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a);
}

void	sort_small(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_len(*stack_a) == 2)
		sa(stack_a);
	else if (stack_len(*stack_a) == 3)
		sort_three(stack_a);
	else if (stack_len(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (stack_len(*stack_a) == 5)
		sort_five(stack_a, stack_b);
}
