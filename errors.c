/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:28:35 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/09 19:10:29 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_num(char *str)
{
	if ((*str == '+' || *str == '-') && ft_strlen(str))
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

void	free_stack(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*tmp;

	current = *stack_a;
	if (!stack_a || !*stack_a)
		return ;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack_a = NULL;
}

void	error_free(t_stack **stack_a)
{
	free_stack(stack_a);
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

int	dup_error(t_stack *stack_a, int n)
{
	if (!stack_a)
		return (0);
	while (stack_a)
	{
		if (stack_a->num == n)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
