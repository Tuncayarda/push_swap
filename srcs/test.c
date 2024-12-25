/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:34:06 by tuaydin           #+#    #+#             */
/*   Updated: 2024/12/25 16:38:25 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *args[])
{
	t_stack *a;
	t_stack	*tmp;
	
	a = ps_parse(ac, args);
	ft_printf("--A--\n");
	tmp = a;
	if (tmp)
		for (int i = 0; i < stack_size(a); i++)
		{
			ft_printf("%d %d\n",i, tmp->val);
			tmp = tmp->next;
		}
	
	stack_free(&a);
}