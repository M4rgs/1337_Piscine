/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamounir <tamounir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:16:55 by tamounir          #+#    #+#             */
/*   Updated: 2024/08/13 05:21:42 by tamounir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	m;
	int	*p;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	m = max - min;
	p = malloc((m) * sizeof(int));
	if (p == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (m);
}
