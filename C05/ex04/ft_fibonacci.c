/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:03:56 by mataman           #+#    #+#             */
/*   Updated: 2022/08/07 00:32:55 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 1)
	{
		return (1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
