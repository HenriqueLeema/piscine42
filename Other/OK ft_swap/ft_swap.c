/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:27:02 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 12:04:23 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int a = 1;
	int b = 2;
	
	int *pa = &a;
	int *pb = &b;
	
	printf("%d, %d\n", a, b);
	ft_swap(pa, pb);
	printf("%d, %d\n", a, b);
	
	return (0);
}*/
