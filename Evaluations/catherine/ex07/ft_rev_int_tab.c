/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:03:30 by catdos-s          #+#    #+#             */
/*   Updated: 2023/03/22 23:26:44 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < --size)
		ft_swap(&tab[i], &tab[size]);
}

int main(void)
{
	int tab[] = {1,2,3,4,5,6};
	int i = 0;
	int size = 6;
	
	printf("Antes:");
	while (i < size)
	printf("[%d]", tab[i++]);
	
	ft_rev_int_tab(tab, size);
	i = 0;
	printf("\nDepois:");
	
	while(i < size)
		printf("[%d]", tab[i++]);
}
