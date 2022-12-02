/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 02:25:33 by mataman           #+#    #+#             */
/*   Updated: 2022/07/28 05:08:11 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{	
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 'a' || str[a] > 'z') && (str[a] < 'A' || str[a] > 'Z'))
		{	
			return (0);
		}
		a++;
	}
	return (1);
}
