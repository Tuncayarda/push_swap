/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:38:46 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 17:42:42 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
	{
		if (stack->val > stack->next->val)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	find_min(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->val;
	while (stack)
	{
		if (stack->val < min)
			min = stack->val;
		stack = stack->next;
	}
	return (min);
}

void	sort_three(t_stack **stack)
{
	while (!is_sorted(*stack))
	{
		if ((*stack)->val > (*stack)->next->val)
			sa(stack, 1);
		else if ((*stack)->next->val > (*stack)->next->next->val)
			rra(stack, 1);
	}
}

void	sort_four(t_stack **stack, t_stack **stack_b)
{
	int	min;
	int	size;
	int	i;

	if (is_sorted(*stack))
		return ;
	size = stack_size(*stack);
	min = find_min(*stack);
	i = 0;
	while ((*stack)->val != min)
	{
		rra(stack, 1);
		i++;
	}
	pb(stack, stack_b);
	sort_three(stack);
	pa(stack, stack_b);
}

void	sort_five(t_stack **stack, t_stack **stack_b)
{
	int	min;
	int	size;
	int	i;
	int	j;

	j = 0;
	if (is_sorted(*stack))
		return ;
	while (j < 2)
	{
		size = stack_size(*stack);
		min = find_min(*stack);
		i = 0;
		while ((*stack)->val != min)
		{
			rra(stack, 1);
			i++;
		}
		pb(stack, stack_b);
		j++;
	}
	sort_three(stack);
	pa(stack, stack_b);
	pa(stack, stack_b);
}
