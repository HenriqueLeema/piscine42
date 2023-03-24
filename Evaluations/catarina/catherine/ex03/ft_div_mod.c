/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:27:24 by catdos-s          #+#    #+#             */
/*   Updated: 2023/03/22 19:34:45 by catdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a = 5, b = 2;
	int div, mod;
	
	ft_div_mod(a, b, &div, &mod);	//adress of the div and mod of ft_div_mod upstream
	printf("div is %d\nrest is: %d\n", div, mod);	//referes to lines above
	
	return (0);
}*/
