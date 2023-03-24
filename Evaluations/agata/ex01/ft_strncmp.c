/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:35:06 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/19 17:35:14 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && n > 0)
	{
		if (s1[x] != s2[x])
		{
			break ;
		}
		x++;
		n--;
	}	
	if (n == 0)
	{
		return (0);
	}	
	return (s1[x] - s2[x]);
}
/*int 	main(void)
{
	unsigned int y;
	
	y = 10;
	printf("%d\n", ft_strncmp("Abb","abcd", y));
	printf("%d\n", strncmp("Abb","abcd", y));	


return (0);
}*/
