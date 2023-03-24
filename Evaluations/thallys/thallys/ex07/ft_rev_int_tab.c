/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:58:55 by tlima-da          #+#    #+#             */
/*   Updated: 2023/03/22 23:01:44 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	initial;
	int	last;
	int	swap;

	initial = 0;
	last = size - 1;
	while (initial < last)
	{
		swap = tab[initial];
		tab[initial] = tab[last];
		tab[last] = swap;
		initial++;
		last--;
	}
}

