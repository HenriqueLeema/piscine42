/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:12:10 by kgomes-d          #+#    #+#             */
/*   Updated: 2023/03/23 14:19:12 by kgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 97) && (str[c] <= 122))
			str[c] -= 32;
		c++;
	}
	return (str);
}

int		main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	
	printf("%s\n", ft_strupcase(lowercase));
}
