/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamounir <tamounir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:17:47 by tamounir          #+#    #+#             */
/*   Updated: 2024/08/13 22:05:38 by tamounir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

void	nullasat(char *str, int lentt)
{
	int	i;

	i = 0;
	while (i < lentt)
	{
		str[i] = '\0';
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		lent;
	int		i;

	i = 0;
	lent = len(sep) * (size - 1);
	while (i < size)
	{
		lent += len(strs[i]);
		i++;
	}
	p = malloc (lent + 1);
	i = 0;
	nullasat(p, lent);
	while (i < size)
	{
		ft_strcat(p, strs[i]);
		if (i != size - 1)
		{
			ft_strcat(p, sep);
		}
		i++;
	}
	return (p);
}
