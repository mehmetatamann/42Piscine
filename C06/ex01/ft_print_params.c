/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 01:16:31 by mataman           #+#    #+#             */
/*   Updated: 2022/08/07 01:31:28 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
		ft_putchar(argv[a][b]);
		b++;
		}
	ft_putchar('\n');
	a++;
	}
	return (0);
}
