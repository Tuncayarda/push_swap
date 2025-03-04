/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:40:43 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 18:02:39 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_pop(t_stack **stack)
{
	t_stack	*rtn;

	rtn = *stack;
	*stack = (*stack)->next;
	return (rtn);
}

void	stack_free(t_stack **stack)
{
	t_stack	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

void	set_idx(t_stack **stack)
{
	t_stack	*current;
	t_stack	*other;
	int		index;

	if (!stack || !(*stack))
		return ;
	current = *stack;
	while (current)
	{
		index = 0;
		other = *stack;
		while (other)
		{
			if (other->val < current->val)
				index++;
			other = other->next;
		}
		current->idx = index;
		current = current->next;
	}
}
