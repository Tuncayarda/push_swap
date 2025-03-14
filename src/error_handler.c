/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:16:52 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/15 00:31:56 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	is_int_range(char *str)
{
	long	num;

	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

void	terminate_prog(char **set_free, int i)
{
	if (set_free)
	{
		while (set_free[i])
		{
			free(set_free[i]);
			i++;
		}
		free(set_free);
	}
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	check_errors(int ac, char **args)
{
	int		i;
	int		arg;
	char	**values;

	if (ac < 2)
		terminate_prog(NULL, 0);
	arg = 1;
	while (arg < ac)
	{
		i = 0;
		values = ft_split(args[arg], ' ');
		if (!values || !values[i])
			terminate_prog(values, 0);
		while (values[i])
		{
			if (!values[i] || !is_numeric(values[i])
				|| !is_int_range(values[i]) || ft_strlen(values[i]) > 11)
				terminate_prog(values, i);
				free(values[i]);
			i++;
		}
		free(values);
		arg++;
	}
}
