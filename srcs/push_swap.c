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

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) == 1)
		return ;
	else if (stack_size(*stack_a) == 2)
	{
		if ((*stack_a)->val > (*stack_a)->next->val)
			sa(stack_a, 1);
	}
	else if (stack_size(*stack_a) == 3)
		sort_three(stack_a);
	else if (stack_size(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (stack_size(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else
		sort_radix(stack_a, stack_b);
}

int	main(int ac, char *args[])
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*tmp;

	a = ps_parse(ac, args);
	b = NULL;
	set_idx(&a);
	sort(&a, &b);
	tmp = a;
	stack_free(&a);
}
