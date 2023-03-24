/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:57:42 by catdos-s          #+#    #+#             */
/*   Updated: 2023/03/22 23:21:54 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	if (*str)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
	}
}

int main()
{
	char i[] = "Hello, James";
	char *a;
	a = i;
	
	ft_putstr(a);
}
