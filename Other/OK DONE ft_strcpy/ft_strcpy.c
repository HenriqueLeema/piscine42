/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:23:53 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/17 13:04:01 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//reproduce the behaviour of the function strcpy (according to man strcpy, it`s 
//a function that copies from a source to a destination (char source, char dest)

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2) //s1 dest, s2 source !! DESTINAT IS FIRST
{
	int	i; //ITERATOR
	/*An object that allows you to step through contents of Another object, by 
	providing convenient operations for getting the first element, testing when 
	you are done, and getting the next element if you are not. In C, we try to 
	design iterators to have operations that fit well in the top of a for loop.*/

	i = 0;
	while(s2[i]) //while there's a source value, we assign an iterator to it
	{			//and declare destination = source (in terms of iterator)
		s1[i] = s2[i];
		i++; //and we increase it within the loop
	}
	s1[i] = '\0'; //that's a null terminator in case our s2[i] is not true
	return (0); //WHY DO WE NEED THIS - WE NEED IT THOU
}

int	main(void) ////////// no need ********************************
{
	char src[] = "prettyshitty"; // source was crap, we want to move it to destination
	char dst[] = ""; // it should print here 
	//PRINTING THE BEFORE
	printf(":%s:\n", dst); //including collumns to show eventual empty spaces in between
	//RUNNING THE STRING COPY CODE
	ft_strcpy(dst, src) ;
	//CHECKING THE AFTER
	printf(":%s:\n", dst);
	return(0);
}