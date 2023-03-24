/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:52:12 by kgomes-d          #+#    #+#             */
/*   Updated: 2023/03/22 21:33:59 by kgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == 0)
	{
		return (1);
	}	
	while (*str != 0)
	{
		if ((*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "abcd23";
	char	str2[] = "jgfdkj";

	printf("%d\n", ft_str_is_alpha(str2));
}*/
