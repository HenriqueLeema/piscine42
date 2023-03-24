/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:14:21 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/20 23:06:24 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
     char src[] = "eita";
     char *dest = "yayyy";

     ft_strncpy(src, dest, 5);
     printf("%s\n", src);
     return 0;
}
*/
//https://stackoverflow.com/questions/54770801/why-does-this-implementation-of-strncpy-work
/*
strncpy(dst, "foo", 5); // writes 'f', 'o', 'o', 0, and 0
strncpy(dst, "foo", 3); // writes 'f', 'o', and 'o': dst is not a string now (*)
strncpy(dst, "foo", 1); // write 'f': dst is not a string now (*)  */
// (*) unless you make sure there is a '\0' somewhere else in dst
