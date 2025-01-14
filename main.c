/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:28:49 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/10 15:49:33 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		start_stack(&stack_a, av + 1);
		if (stack_a && check_sorted(stack_a))
		{
			if (stack_len(stack_a) <= 5)
				sort_small(&stack_a, &stack_b);
			else
				sort_big(&stack_a, &stack_b);
		}
		free_stack(&stack_a);
	}
	return (0);
}
