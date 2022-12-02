/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 04:38:48 by mataman           #+#    #+#             */
/*   Updated: 2022/07/27 04:47:59 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	wr(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	b;

	b = 0;
	while (str[b])
	{
		b++;
	}
	return (b);
}
