/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:00:24 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 12:32:23 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	i;
	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char *i;

	i = "holy shit";
	ft_putstr(i);
	write(1, "\n", 1);
	return (0);
}

/*
only function, couldn't make a main:
	while(*str)
	write(1, str++, 1);
*/
/*/*
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
	}*/

