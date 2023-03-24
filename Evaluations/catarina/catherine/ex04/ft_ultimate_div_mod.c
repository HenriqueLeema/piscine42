/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:48:37 by catdos-s          #+#    #+#             */
/*   Updated: 2023/03/22 19:40:49 by catdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int i = 5, j = 2;
	int *a = &i;
	int *b = &j;
	
	ft_ultimate_div_mod(a, b);
	printf("div is %d\nrest is: %d\n", *a, *b);
	return (0);
}*/
