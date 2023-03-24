/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:03:48 by kgomes-d          #+#    #+#             */
/*   Updated: 2023/03/23 16:03:59 by kgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65) && (str[c] <= 90))
			str[c] += 32;
		c++;
	}
	return (str);
}

/*int		main(void)
{
	char uppercase[] = "abcdefgAAAAABBBBBBrstuvwxyz";
	
	printf("%s\n", ft_strlowcase(uppercase));
}*/
