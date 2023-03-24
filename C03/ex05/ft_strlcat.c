/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:22:08 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/24 00:29:42 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i, j;

    // find the end of dest
    i = 0;
    while (dest[i] != '\0' && i < size)
        i++;


    // calculate space left & returns total length 'dest + src + \0'
    unsigned int spaceLeft = size - i;
    if (spaceLeft == 0)
        return i + ft_strlen(src);
        j = 0;
        
        
    // copy as many characters from src as will fit into dest
    while (src[j] != '\0' && j < spaceLeft - 1) // check if this -1 is to compensate \0
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';

    // return the total length of the resulting string
    return i + ft_strlen(src);
}

int main(void)
{
    char dest[7] = "HEAD";
    char src[] = " NECK";
    unsigned int size = sizeof(dest);

    printf("Before: dest = %s, src = %s\n", dest, src);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("After: dest = %s, src = %s\n", dest, src);
    printf("Result: %u\n", result);

    return 0;
}


