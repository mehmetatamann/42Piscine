/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:49:00 by mataman           #+#    #+#             */
/*   Updated: 2022/08/08 20:53:25 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = 1;
	if (nb >= 1)
	{
		while (power > 0)
		{
			a *= nb;
			return (nb * ft_recursive_power(nb, power - 1));
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
