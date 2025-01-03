/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:45:34 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:18:53 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_pf(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (6);
	while (s[i])
		i++;
	return (i);
}
