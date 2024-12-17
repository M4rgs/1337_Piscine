/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamounir <tamounir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 04:16:33 by tamounir          #+#    #+#             */
/*   Updated: 2024/08/07 00:06:04 by tamounir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb < 1)
	{
		return (1);
	}
	i = nb * (ft_recursive_factorial(nb - 1));
	return (i);
}
