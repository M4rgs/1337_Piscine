/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamounir <tamounir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:38:39 by tamounir          #+#    #+#             */
/*   Updated: 2024/08/07 00:02:20 by tamounir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	rz;

	rz = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		rz = nb * ft_recursive_power(nb, power - 1);
	return (rz);
}
