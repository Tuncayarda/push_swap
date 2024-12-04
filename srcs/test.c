/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:34:06 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/30 21:17:19 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
	t_list *a;
	t_list *b;

	int nums[5] = {1, 2, 3, 4, 5};
	a = ft_lstnew(&nums[0]);

	ft_lstadd_back(&a, ft_lstnew(&nums[1]));
	ft_lstadd_back(&a, ft_lstnew(&nums[2]));
	ft_lstadd_back(&a, ft_lstnew(&nums[3]));
	ft_lstadd_back(&a, ft_lstnew(&nums[4]));

	
	sa(&a);
	ft_printf("%d\n", *(int *)(a->content));
	a = a->next;
	ft_printf("%d\n", *(int *)(a->content));
	a = a->next;
	ft_printf("%d\n", *(int *)(a->content));
	a = a->next;
	ft_printf("%d\n", *(int *)(a->content));
	a = a->next;
	ft_printf("%d\n", *(int *)(a->content));
}