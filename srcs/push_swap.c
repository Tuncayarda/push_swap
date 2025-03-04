/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:34:06 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 17:27:33 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *args[])
{
	t_stack *a;
	t_stack *b;
	t_stack	*tmp;
	
	a = ps_parse(ac, args);
	b = NULL;

	sort_five(&a, &b);
	tmp = a;
	stack_free(&a);
}