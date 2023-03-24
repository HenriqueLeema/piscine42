/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:58:55 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/19 23:46:48 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strcpy()  function  copies the string pointed to by src, including
       the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
       The  strings  may  not overlap, and the destination string dest must be
       large enough to receive the copy.  Beware  of  buffer  overruns!   (See
       BUGS.)

*/


#include <stdio.h>

char	*ft_strcpy(char *dest, char *src) //function that returns pointers to ints
{
	int	i;
	
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // if I don`t use it, :source:tion
	return (0);
}

int	main(void)
{
	char dst[] = ":destination:";
	char src[] = ":source:";

	printf("Dest was: %s\n", dst);
	ft_strcpy(dst, src);
	printf("Dest now: %s\n", dst);
	return (0);
}
