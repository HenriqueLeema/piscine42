/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:03:48 by kgomes-d          #+#    #+#             */
/*   Updated: 2023/03/23 20:09:25 by hde-souz         ###   ########.fr       */
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

int		main(void)
{
	char uppercase[] = "abcdefgAAAAABBBBBBrstuvwxyz";
	
	printf("%s\n", ft_strlowcase(uppercase));
}
