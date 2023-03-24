/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:14:14 by tlima-da          #+#    #+#             */
/*   Updated: 2023/03/21 21:40:27 by tlima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%d - %d", *div, *mod);
}

/*int main(void)
{
    int x;
    int y;

    x = 4;
    y = 2;
    ft_div_mod(x, y, &x, &y);
    return (0);
}*/
