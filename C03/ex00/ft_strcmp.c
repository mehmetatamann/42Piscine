/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:22:51 by mataman           #+#    #+#             */
/*   Updated: 2022/08/03 16:11:57 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] > s2[a])
		{
			a++;
			return (1);
		}
		else if (s1[a] < s2[a])
		{
			a++;
			return (-1);
		}
		a++;
	}
	return (0);
}
