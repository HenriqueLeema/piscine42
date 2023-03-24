/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:14:26 by tlima-da          #+#    #+#             */
/*   Updated: 2023/03/21 21:42:26 by tlima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	c;

	d = *a;
	c = *b;
	*a = d / c;
	*b = d % c;
	printf("%d - %d", *a, *b);
}

/*int main(void)
{
    int x;
    int y;

    x = 10;
    y = 4;
    ft_ultimate_div_mod(&x, &y);
    return (0);
}*/
