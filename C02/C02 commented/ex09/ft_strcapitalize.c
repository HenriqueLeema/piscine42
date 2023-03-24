/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:08:27 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/21 20:53:04 by hde-souz         ###   ########.fr       */
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
	while (*(str + i) != '\0') //acharacter at index i in the string str != \0
	{
		c = *(str + i); //assign the upper shit to c
		if (j == 1 && c >= 'a' && c <= 'z') //inicio, lower vira upper
			str[i] -= 32;
		
		if (j== 0 && c >= 'A' && c <= 'Z') //upper fora do inicio vira lower
			str[i] += 32;
		
		//restante determinado por valor de J, entao codigos deixam j 1, else = zero
		//falta as merdas 
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
	char	str[] = "testE &^%&^;WERWERy, 987987TESTE	FuCk iT AlL";
	char    exp[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(exp));
}








/*So the expression *str is equivalent to str[0]. Or str[1] is equivalent tp *( str + 1 ) 
that in turn is equivalent to *( ++str + 0 ) or *++str or to the combination of the 
expressions ++str and *str*/
//reference
//https://stackoverflow.com/questions/72630711/iterate-over-str-vs-str-in-while-loop-in-c