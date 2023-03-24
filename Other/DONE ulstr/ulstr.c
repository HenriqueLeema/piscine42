/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:23:30 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 12:41:24 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a fucking program that takes a shity string and reverses the case
// of all its letters, like a piece of shit

// we need an 'if/else' statement to keep track of the current stuff

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac = 2) //if argument count is 2, we want to play with *av[1]
	{           //cause it's the second argumento upon compilation
		while (*av[1])
		{
			if(*av[1] >= 'a' && *av[1] <= 'z')
				*av[1] -= 32;
			else if (*av[1] >= 'A' && *av[1] <= 'z')
			*av[1] += 32;
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, av[1], 1);
	write(1, "\n", 1); // asked in the question to be printed anyways
	return (0);
}