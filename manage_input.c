/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:29:01 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/10 12:56:09 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	add_node(t_stack **stack_a, int n)
{
	t_stack	*new_node;
	t_stack	*last_node;

	if (!stack_a)
		return (1);
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (1);
	new_node->next = NULL;
	new_node->num = n;
	if (!*stack_a)
	{
		*stack_a = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack_a);
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (0);
}

long	ft_atol(char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

void	start_stack(t_stack **stack_a, char **av)
{
	int		i;
	long	n;

	i = 0;
	while (av[i])
	{
		if (error_num(av[i]))
			error_free(stack_a);
		n = ft_atol(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			error_free(stack_a);
		if (dup_error(*stack_a, (int)n))
			error_free(stack_a);
		if (add_node(stack_a, (int)n))
			error_free(stack_a);
		i++;
	}
}
