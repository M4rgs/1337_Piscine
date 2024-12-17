/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamounir <tamounir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:30:18 by tamounir          #+#    #+#             */
/*   Updated: 2024/08/12 14:27:53 by tamounir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}
#include <stdio.h>
int main()
{
	int n;
	int *n1;
	int **n2;
	int ***n3;
	n = 32;

	n1 = &n;
	n2 = &n1;
	n3 = &n2;
	ft_ultimate_ft(n3);
	printf("%d", n);
}
