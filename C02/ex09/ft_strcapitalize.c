/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:08:27 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/21 22:52:10 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}
/*
int		main(void)
{
	char	str[] = "testE &^%&^;WERWERy, 987987TESTE	FuCk iT AlL";
	char    exp[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(exp));
}

first while //acharacter at index i in the string str != \0
str[1] is equivalent to *( str + 1 ) 
first iff for lower to up, second if opposite
after the third if for special characters, the j definition will handle
whether the first is upper or lower case by definning j = 0 on Else  */
