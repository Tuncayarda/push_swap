/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:50:50 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 21:11:18 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_parse(int ac, char **args)
{
	t_stack	*rtn;
	char	**values;
	int		i;
	int		arg;

	arg = 1;
	rtn = NULL;
	while (arg < ac)
	{
		i = 0;
		values = ft_split(args[arg], ' ');
		while (values[i])
		{
			stack_add_back(&rtn, stack_new(ft_atoi(values[i])));
			free(values[i]);
			i++;
		}
		free (values);
		arg++;
	}
	return (rtn);
}
