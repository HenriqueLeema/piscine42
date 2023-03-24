/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:58:41 by catdos-s          #+#    #+#             */
/*   Updated: 2023/03/22 23:29:03 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < (size - 1))
	{
		while (x < size)
		{
			if (tab[x] < tab[i])
				ft_swap(&tab[i], &tab[x]);
			else
			x++;
		}
		i++;
		x = i + 1;
	}
}

void	ft_putstr(int *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%d\n", str[i]);
		i++;
	}
}

int	main(void)
{
	int	tab[6] = {2, 4, 5, 6, 1, 3};

	ft_sort_int_tab(tab, 6);
	ft_putstr(tab);
}
