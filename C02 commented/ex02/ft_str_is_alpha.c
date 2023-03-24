/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:07:16 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/20 23:35:33 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && 'Z' >= str[i])
		{
			i++;
		}
		else if ('a' <= str[i] && 'z' >= str[i])
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "12345";
    char str3[] = "testing123";
    char str4[] = "sopa de cachorro";

    if (ft_str_is_alpha(str1))
    {
        printf("%s is alphabetical\n", str1);
    }
    else
    {
        printf("%s is not alphabetical\n", str1);
    }

    if (ft_str_is_alpha(str2))
    {
        printf("%s is alphabetical\n", str2);
    }
    else
    {
        printf("%s is not alphabetical\n", str2);
    }

    if (ft_str_is_alpha(str3))
    {
        printf("%s is alphabetical\n", str3);
    }
    else
    {
        printf("%s is not alphabetical\n", str3);
    }

    if (ft_str_is_alpha(str4))
    {
        printf("%s is alphabetical\n", str4);
    }
    else
    {
        printf("%s is not alphabetical\n", str4);
    }

    return 0;
}