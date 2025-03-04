/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:34:06 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 18:17:19 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void print_stack(t_stack *stack)
{
    while (stack)
    {
        printf("val: %d, idx: %d\n", stack->val, stack->idx);
        stack = stack->next;
    }
}

void sort(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(stack_a) == 1)
		return;
	if (stack_size(stack_a) == 2)
	{
		
	}
}

int main(int ac, char *args[])
{
	t_stack *a;
	t_stack *b;
	t_stack	*tmp;

	a = ps_parse(ac, args);
	b = NULL;
	
	

	set_idx(&a);
	sort_radix(&a, &b);
	tmp = a;
	stack_free(&a);
}
