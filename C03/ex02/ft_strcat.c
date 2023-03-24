/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:50:55 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/23 00:28:50 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    // finds \0 (end of string) and declares j = 0
    while (dest[i] != '\0')
        i++;
    j = 0; 

    // copy the characters of the string src 
    // to the end of dest, starting from the index after the null-terminator of dest. 
    // while j iterates, i and j increment
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    // the loop copies characters until it reaches the null-terminator of src
    // and then add the null terminator
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char dest[20] = "teste"; 
    char *src = " testando";
    
    printf("Before: %s\n", dest);
    ft_strcat(dest, src);
    printf("After: %s\n", dest);
    
    return 0;
}

/*This main function creates an initial dest string of length 20 and a src string 
to be concatenated. It then calls ft_strcat to concatenate src onto dest, and prints 
the result before and after concatenation using printf.*/