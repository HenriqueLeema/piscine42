/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:17:35 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/22 20:37:57 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]); 
}

int	main(void)
{
	//define 3 strings
	char *s1 = "hey";
	char *s2 = "there";
	char *s3 = "hey";
	int result1, result2, result3;

	//store the return value of each call to ft_strcmp on:
	result1 = ft_strcmp(s1, s2); 
	result2 = ft_strcmp(s1, s3);
	result3 = ft_strcmp(s2, s1);

	//print comparisons for each pair of strings
	printf("Negativo se \"%s\" for menor que \"%s\" = %d\n", s1, s2, result1);
	printf("Zero se \"%s\" for igual a \"%s\" = %d\n", s1, s3, result2);
	printf("Positivo se \"%s\" for maior que \"%s\" = %d\n", s2, s1, result3);

	/*
	zero if s1 = s2
	neg int if s1 < s2 
	pos int if s1 > s2
	*/
	
	return (0);
}