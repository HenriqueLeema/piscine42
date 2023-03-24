/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:23:35 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 11:36:43 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//write a program that takes 3 arguments
//first is a string, get the second and replace by third
//example: "Fuck me" me you   ->   Fuck you
//example 2: "Fuck me" us them -> Fuck me

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		while (*av[1])
		{
			if (*av[2] == *av[1])
			write(1, av[3], 1);
			else
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}