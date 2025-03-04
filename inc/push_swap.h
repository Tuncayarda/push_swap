/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:45:44 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 17:58:32 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int				val;
	int				idx;
	struct s_stack	*next;
}					t_stack;

void	sa(t_stack **stack, int msg);
void	sb(t_stack **stack, int msg);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack, int msg);
void	rb(t_stack **stack, int msg);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack, int msg);
void	rrb(t_stack **stack, int msg);
void	rrr(t_stack **stack_a, t_stack **stack_b);

t_stack	*ps_parse(int ac, char **args);
t_stack	*stack_new(int val);
t_stack	*stacklast(t_stack *stack);
void	stack_add_back(t_stack **stack, t_stack *new);
void	stack_add_front(t_stack **stack, t_stack *new);
int		stack_size(t_stack *stack);
t_stack	*stack_pop(t_stack **stack);
void	stack_free(t_stack **stack);
void	set_idx(t_stack **stack);

int		is_sorted(t_stack *stack);
int		find_min(t_stack *stack);
void	sort_three(t_stack **stack);
void	sort_four(t_stack **stack, t_stack **stack_b);
void	sort_five(t_stack **stack, t_stack **stack_b);


void	sort_radix(t_stack **stack_a, t_stack **stack_b);

#endif