/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:35:52 by mataman           #+#    #+#             */
/*   Updated: 2022/08/06 17:47:39 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	while (nb < 0)
	{
		return (0);
	}
	return (a);
}
