/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:40:15 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/11 16:08:25 by bsequeir         ###   ########.fr       */
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
			if ((col == 1 && lin == 1) || (col == a && lin == 1))
				ft_putchar('A');
			if (lin == b && (col == 1 || col == a) && b != 1)
				ft_putchar('C');
			if (col != 1 && col != a && (lin == 1 || lin == b))
				ft_putchar('B');
			if (lin != 1 && lin != b && (col == a || col == 1))
				ft_putchar('B');
			if (lin != 1 && lin != b && col != a && col != 1)
				ft_putchar(' ');
			col++;
		}
		col = 1;
		lin++;
		ft_putchar('\n');
	}
}
