/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:23:14 by tuaydin           #+#    #+#             */
/*   Updated: 2024/12/04 20:33:25 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack) //will be fixed as soon as possible
{
	t_stack	*last;

	last = stacklast(*stack);
	last->next = *stack;
	stack_add_front(stack, last);
}
