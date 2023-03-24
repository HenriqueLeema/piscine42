/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:23:22 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 12:44:46 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PROGRAM
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char get_char(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	c += 13; //13 letters ahead on the ASCII table
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	c -= 13; //back if upper case
	return (c);
}

int	main(int ac, char **av)
{
	// char c;
	if (ac = 2) // the second argument will have to be "like this"
	{
		while (*av[1])
		ft_putchar(get_char(*av[1]++));
		write(1, "\n", 1);
		return (0);
	}
}