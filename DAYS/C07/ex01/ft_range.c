/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamounir <tamounir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 02:04:56 by tamounir          #+#    #+#             */
/*   Updated: 2024/08/13 22:02:48 by tamounir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	m;
	int	*p;
	int	i;

	i = 0;
	m = max - min;
	if (min >= max)
		return (0);
	p = malloc(m * sizeof(int));
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
