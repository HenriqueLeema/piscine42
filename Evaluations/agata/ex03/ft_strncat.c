/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:36:08 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/19 17:36:10 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	x = 0;
	while (x < nb && src[x] != '\0')
	{
		dest[len + x] = src[x];
		x++;
	}
	dest[len + x] = '\0';
	return (dest);
}
