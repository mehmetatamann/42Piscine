/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:35:23 by mataman           #+#    #+#             */
/*   Updated: 2022/08/08 20:51:56 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (nb >= 1)
	{
		while (power != 0)
		{
			a *= nb;
			power--;
		}
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (a);
}
