/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:50:50 by tuaydin           #+#    #+#             */
/*   Updated: 2024/12/25 16:35:15 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '-')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (i == ft_strlen(str))
		return (1);
	return (0);
}

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
		if (ft_strchr(args[arg], ' '))
		{
			i = 0;
			values = ft_split(args[arg], ' ');
			while (values[i])
			{
				stack_add_back(&rtn, stack_new(ft_atoi(values[i])));
				i++;
			}
			free (values);
		}
		else if (is_numeric(args[arg]))
			stack_add_back(&rtn, stack_new(ft_atoi(args[arg])));
		arg++;
	}
	return (rtn);
}
