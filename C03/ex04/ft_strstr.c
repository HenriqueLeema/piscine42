/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:15:33 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/23 22:25:49 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    char *p1;
    char *p2;
        
    if (*to_find == '\0') // word to be found is null - nothing to be found
        return NULL;
    
    while (*str != '\0') // while until end of 'str' (main sentence) is found
    {
        
        // loop: p1 and p2 looking to 'str' and 'to_find', respectively
        p1 = str;
        p2 = to_find;

    
        // are the characters pointed to by p1 and p2 !=null and equal?
        // if so, increment so it will look to the next character
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) 
        {                                                   
            p1++;       // as long as they're the same                                       
            p2++;       // increment both
        }                                                           


        // when p2 reaches the end of 'to_find' the match is found BANG 
        // we return a pointer to the start of the match in 'str'
        if (*p2 == '\0')   
           return str;   
        
        str++;
        
    }

   return NULL;
}

int main()
{
    char str[] = "Find X and that's it";
    char to_find[] = "X";

    char *result = ft_strstr(str, to_find);

    if (result == NULL) {
        printf("'%s' not found in '%s'\n", to_find, str);
    } else {
        printf("'%s' found at position %ld in '%s'\n", to_find, result - str, str);
    }

    return 0;
}

/*In this example, we declare str as the string we want to search in and to_find as 
the substring we want to find. We call ft_strstr with these arguments and store 
the result in a pointer variable called result.

We then check if result is NULL to see if to_find was found in str. If it was found, 
we use pointer arithmetic to calculate the position of the first character of to_find 
within str, and print the result. If it was not found, we print a message saying so.*/


/*Unlike those func‐
     tions, strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included*/

