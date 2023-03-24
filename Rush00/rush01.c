/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:40:15 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/12 19:21:55 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	lin;
	int	col;

	lin = 1;
	col = 1;
	while (lin <= b)
	{
		while (col <= a)
		{
			if ((col == 1 && lin == 1) || (lin == b && col == a))
				ft_putchar('/');
			if (((col == 1 && lin == b) || (lin == 1 && col == a)) && b!=1 )
				ft_putchar('\\');
			if (col != 1 && col != a && (lin == 1 || lin == b))
				ft_putchar('*');
			if (lin != 1 && lin != b && (col == a || col == 1))
				ft_putchar('*');
			if (lin != 1 && lin != b && col != a && col != 1)
				ft_putchar(' ');
			col++;
		}
		col = 1;
		lin++;
		ft_putchar('\n');
	}
}
