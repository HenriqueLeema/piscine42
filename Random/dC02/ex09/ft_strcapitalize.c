/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 23:24:28 by dcaldas-          #+#    #+#             */
/*   Updated: 2023/03/21 20:48:30 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (j == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

int		main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
}
/*
In the given code, while (*(str + i) != '\0') is a loop that runs until it reaches 
the null character ('\0') at the end of the string.

*(str + i) is used to access the character at index i in the string str. It is equivalent 
to str[i], but using pointer arithmetic notation.

The loop traverses through each character of the input string str and performs the following operations:

    It assigns the value of *(str + i) to a variable c.
	
    If j is 1 (which is true at the start of the loop), and the current character c is a lowercase letter, 
	it converts it to uppercase by subtracting 32 from its ASCII value.
	
    If j is 0 (which means the previous character was a letter or a digit), and the current character c 
	is an uppercase letter, it converts it to lowercase by adding 32 to its ASCII value.
   
    It checks if the current character c is not a letter or a digit, and sets j to 1, indicating that 
	the next character encountered will be the start of a new word. If c is a letter or a digit, 
	j is set to 0.

After traversing through the entire string, the function returns the modified string str. 
The function ft_strcapitalize capitalizes the first letter of each word and converts the rest of the 
letters to lowercase.
*/    