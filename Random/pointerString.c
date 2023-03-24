/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointerString.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:46:12 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/19 22:52:16 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	myPutchar(char *str)
{
	char	*ptr;
	
	ptr = "LMAO";
	str = ptr;
	
	write(1, str, 4);
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str;

	str = "LOL";

	write(1, str, 3);
	write(1, "\n", 1);

	myPutchar(str);

	write(1, str, 3);
	write(1, "\n", 1);

	return (0);
}