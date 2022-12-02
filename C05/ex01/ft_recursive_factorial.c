/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:04:54 by mataman           #+#    #+#             */
/*   Updated: 2022/08/08 21:07:27 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb >= 1)
	{
		a = nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	else
	{
		return (0);
	}
	return (a);
}
