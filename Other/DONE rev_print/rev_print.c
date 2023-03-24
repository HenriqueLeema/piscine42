/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:23:47 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 11:01:11 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fuck
//reverse-print
//program that takes a string and prints it in reverse

#include <stdio.h>
#include <unistd.h>


int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++) // while this string increases, so does my iterator
		i++;
	return (i); //and I return my iterator (being called by main)
}

int	main(int ac, char **av)
{
	int len;

	if (ac = 2) //if my argument is the second (after the program name)
	{
		len = ft_strlen(av[1]); //my len becomes str length av of my compiling argument 
		while (len--)
		write(1, &av[1][len], 1);		
	}
	write(1, "\n", 1);
	return(0);
}