/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:23:39 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 12:45:52 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//PROGRAM
#include <unistd.h>

char	getChar(char j)
{
	char	c;

	c = j;
	if (c == 'z')
	c = 'a';
	else if (c == 'Z')
	c = 'A';
	else if ((j >= 'a' && j <= 'y') || (j >= 'A' && j <= 'Y'))
	c = j + 1;
	return (c);
}

int	main(int ac, char **av)
{
	char	c;
	
	if(ac == 2)
	{
		while (*av[1])
		{
			c = getChar(*av[1]);
			write(1, &c, 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}