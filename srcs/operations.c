/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:57:39 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/30 21:20:58 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **lst)
{
	t_list	temp;

	if (ft_lstsize(*lst) < 2)
		return ;
	temp.content = (*lst)->content;
	(*lst)->content = ((*lst)->next)->content;
	((*lst)->next)->content = temp.content;
	ft_printf("sa\n");
}

void	sb(t_list **lst)
{
	t_list	temp;

	if (ft_lstsize(*lst) < 2)
		return ;
	temp.content = (*lst)->content;
	(*lst)->content = ((*lst)->next)->content;
	((*lst)->next)->content = temp.content;
	ft_printf("sb\n");
}

void	ss(t_list **lst_a, t_list **lst_b)
{
	sa(lst_a);
	sb(lst_b);
	ft_printf("ss\n");
}