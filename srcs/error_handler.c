/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:16:52 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/04 21:33:27 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void terminate_prog()
{
	ft_printf("Error\n");
	exit(0);
}

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

void	check_errors(int ac, char **args)
{
	int		i;
	int     arg;
	char    **values;
	
	if (ac < 2)
		terminate_prog();
	arg = 1;
	while (arg < ac)
	{
		i = 0;
		values = ft_split(args[arg], ' ');
		if (!values || !values[i])
			terminate_prog();
		while (values[i])
		{
			if (!values[i] || is_numeric(values[i]) == 0)
				terminate_prog();
			free(values[i]);
			i++;
		}
		free (values);
		arg++;
	}
}
