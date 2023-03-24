/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:14:18 by kgomes-d          #+#    #+#             */
/*   Updated: 2023/03/23 20:07:57 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == 0)
	{
		return (1);
	}	
	while (*str != 0)
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char	str[] = "b2jK|jj";
	char	str2[] = "KJ%JHKØJG";
	char	str3[] = "jhhjhjhl";
	char	str4[] = "";
	
	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
}
