/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:21:12 by kgomes-d          #+#    #+#             */
/*   Updated: 2023/03/22 20:50:54 by kgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Abacate Abacate";
	char	dest[30];

	printf("%s\n", ft_strncpy(dest, src, 5));
}*/
