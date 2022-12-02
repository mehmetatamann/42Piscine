/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 02:52:38 by mataman           #+#    #+#             */
/*   Updated: 2022/07/28 05:08:52 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_numeric(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] <= 47 || str[a] >= 58))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
