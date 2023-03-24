/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:21:12 by kgomes-d          #+#    #+#             */
/*   Updated: 2023/03/23 20:03:51 by hde-souz         ###   ########.fr       */
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

int	main(void)
{
	char	src[] = "Abacate Abacate";
	char	dest[30];

	printf("%s\n", ft_strncpy(dest, src, 5));
}
