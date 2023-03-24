/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:17:14 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 10:20:41 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Program that takes a string and prints its first word

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2) //cause 1 is the name of the program - 2 arguments would be the name + the string we're talking about (argument)
	{
		//while a valid string, which is the first right after my program name on the compilation line
		while (*av[1] && (*av[1] == '\t' || *av[1] == ' ')) // is valid + conditions (equal to tab or space we print)
		av[1]++; //iterate over any empty space
		while (*av[1] && (*av[1] != '\t' || *av[1] != ' ')) // is valid + conditions (no tabs nor spaces we print)
		write(1, av[1]++, 1); //we print
	}
	write(1, "\n", 1); //if out of my if the program wants a line
	
	return (0);
}