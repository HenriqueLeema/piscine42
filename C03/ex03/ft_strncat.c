/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:04:36 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/23 02:22:44 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strcat(char *dest, char *src, unsigned int nb)
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
    while (nb > j)
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
    char dest[50] = "teste"; 
    char *src = " testando";
    
    
    printf("Before: %s\n", dest);
    ft_strcat(dest, src, 5);
    printf("After: %s\n", dest);
    
    return 0;
}

