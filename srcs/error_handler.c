/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:16:52 by tuaydin           #+#    #+#             */
/*   Updated: 2025/03/05 03:58:47 by tuaydin          ###   ########.fr       */
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
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

long ft_atol(const char *str) {
	long result = 0;
	int sign = 1;
	
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+') {
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9') {
		result = result * 10 + (*str - '0');
		str++;
	}
	return result * sign;
}

int	is_int_range(char *str)
{
	long	num;

	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

void terminate_prog() {
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void check_errors(int ac, char **args) {
	int i, arg;
	char **values;

	if (ac < 2)
		terminate_prog();
	for (arg = 1; arg < ac; arg++) {
		i = 0;
		values = ft_split(args[arg], ' ');
		if (!values || !values[i])
			terminate_prog();
		while (values[i]) {
			if (!values[i] || !is_numeric(values[i]) || !is_int_range(values[i]))
				terminate_prog();
			free(values[i]);
			i++;
		}
		free(values);
	}
}
