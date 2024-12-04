/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:28:06 by tuaydin           #+#    #+#             */
/*   Updated: 2024/12/04 19:57:24 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *read_stack(char *arg)
{
	int		i;
	char	**nums;
	t_stack	*rtn;

	i = 0;
	nums = ft_split(arg, ' ');
	rtn = NULL;
	while (nums[i])
	{
		if (i == 0)
			rtn = stack_new(ft_atoi(nums[i]));
		else
			stack_add_back(&rtn, stack_new(ft_atoi(nums[i])));
		i++;
	}
	return (rtn);
}
