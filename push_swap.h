/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalana- <ebalana-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:27:16 by arcebria          #+#    #+#             */
/*   Updated: 2025/01/10 17:37:26 by ebalana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "inc/Libft/libft.h"
# include "inc/Printf/ft_printf.h"
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_stack
{
	long			num;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	start_stack(t_stack **stack_a, char **av);
long	ft_atol(char *str);
int		add_node(t_stack **stack_a, int n);
int		dup_error(t_stack *stack_a, int n);
void	error_free(t_stack **stack_a);
void	free_stack(t_stack **stack_a);
int		error_num(char *str);
t_stack	*find_last(t_stack *stack_a);
int		stack_len(t_stack *stack);
int		check_sorted(t_stack *stack);
void	sa(t_stack **stack);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
t_stack	*find_max(t_stack *stack);
t_stack	*find_min(t_stack *stack);
int		pos_min(t_stack *stack);
int		pos_max(t_stack *stack);
void	put_min_top(t_stack **stack);
void	put_max_top(t_stack **stack);
void	sort_small(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack);
void	sort_four(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_big(t_stack **stack_a, t_stack **stack_b);

#endif
