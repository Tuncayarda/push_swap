/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:34:06 by tuaydin           #+#    #+#             */
/*   Updated: 2024/12/21 20:03:02 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *args[])
{
	t_stack *a;
	t_stack *b;	
	t_stack	*tmp;
	
	
	a = read_stack(args[1]);
	b = read_stack(args[2]);
	ft_printf("--A--\n");
	tmp = a;
	if (tmp)
		for (int i = 0; i < stack_size(a); i++)
		{
			ft_printf("%d %d\n",i, tmp->val);
			tmp = tmp->next;
		}
	ft_printf("--B--\n");
	tmp = b;
	if (tmp)
		for (int i = 0; i < stack_size(b); i++)
		{
			ft_printf("%d %d\n",i, tmp->val);
			tmp = tmp->next;
		}
	
	rrr(&a, &b);
	ft_printf("--A--\n");
	tmp = a;
	if (tmp)
		for (int i = 0; i < stack_size(a); i++)
		{
			ft_printf("%d %d\n",i, tmp->val);
			tmp = tmp->next;
		}
	ft_printf("--B--\n");
	tmp = b;
	if (tmp)
		for (int i = 0; i < stack_size(b); i++)
		{
			ft_printf("%d %d\n",i, tmp->val);
			tmp = tmp->next;
		}
}