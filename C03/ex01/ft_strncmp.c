/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:27:15 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/22 22:18:54 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	//define 3 strings
	char *s1 = "he3lo";
	char *s2 = "h12lo";
	char *s3 = "hello";
	int result1, result2, result3;

	//store the return value of each call to ft_strcmp into 3 variables
	result1 = ft_strncmp(s1, s2, 3);
	result2 = ft_strncmp(s1, s3, 5);
	result3 = ft_strncmp(s2, s1, 2);

	//print ft_strncmp with strings combinations comparing n elements
	printf("ft_strncmp(\"%s\", \"%s\", %u) = %d\n", s1, s2, 3, result1);
	printf("ft_strncmp(\"%s\", \"%s\", %u) = %d\n", s1, s3, 5, result2);
	printf("ft_strncmp(\"%s\", \"%s\", %u) = %d\n", s2, s1, 2, result3);

	return (0);
}

/* strcmp and strncmp differente 
   strcmp compares entire strings
   strNcmp compares the first n characters */