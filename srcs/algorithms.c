/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:38:46 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/05 03:51:40 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void sort_three(t_stack **stack)
{
    int a;
	int b;
	int c;
    
    a = (*stack)->val;
    b = (*stack)->next->val;
    c = (*stack)->next->next->val;
    if (a > b && b < c && a < c)
        sa(stack, 1);
    else if (a > b && b > c)
    {
        sa(stack, 1);
        rra(stack, 1);
    }
    else if (a > b && b < c && a > c)
        ra(stack, 1);
    else if (a < b && b > c && a < c)
    {
        sa(stack, 1);
        ra(stack, 1);
    }
    else if (a < b && b > c && a > c)
        rra(stack, 1);
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
	int	size;
	int	min;
	int	index;
	int	i;

	if (is_sorted(*stack))
		return ;
	i = 0;
	while (i < 2)
	{
		size = stack_size(*stack);
		min = find_min(*stack);
		index = get_index(*stack, min);
		if (index <= size / 2)
			while ((*stack)->val != min)
				ra(stack, 1);
		else
			while ((*stack)->val != min)
				rra(stack, 1);
		pb(stack, stack_b);
		i++;
	}
	sort_three(stack);
	pa(stack, stack_b);
	pa(stack, stack_b);
}
