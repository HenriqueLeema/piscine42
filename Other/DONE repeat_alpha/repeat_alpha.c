/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:23:50 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 12:41:55 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A BECAMES A, B BECOMES BB, Z BECOMES ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
// program
#include <stdio.h>
#include <unistd.h>

int alphabet_count(char c)
{
	if (c >= 'a' && c <= 'z')
	return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
	return (c - 'A' + 1);
	return (1);
}

int	main(int ac, char **av)
{
	int i;
	int count;

	i = 0;
	if (ac = 2)
	{
		while (av[1][i])
		{
			count = alphabet_count(av[1][i]);
			while (count--)
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}