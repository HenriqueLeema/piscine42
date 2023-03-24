/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaldas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 00:27:50 by dcaldas-          #+#    #+#             */
/*   Updated: 2023/03/19 00:45:57 by dcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	x;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				x = 256 + str[i];
			else
				x = str[i];
			ft_putchar("0123456789abcdef"[x / 16]);
			ft_putchar("0123456789abcdef"[x % 16]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "Hello, \nworld";
	ft_putstr_non_printable(str);
}
*/
