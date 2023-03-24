/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:49:05 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/21 22:38:11 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
    char str1[] = "meucu";
    char str2[] = "TEUCU";
    char str3[] = "VOSSOcu";
    char str4[] = ""; // vazia retorna 1, ok

    if (ft_str_is_uppercase(str1))
    {
        printf("%s is uppercase\n", str1);
    }
    else
    {
        printf("%s is not uppercase\n", str1);
    }

    if (ft_str_is_uppercase(str2))
    {
        printf("%s is uppercase\n", str2);
    }
    else
    {
        printf("%s is not uppercase\n", str2);
    }

    if (ft_str_is_uppercase(str3))
    {
        printf("%s is uppercase\n", str3);
    }
    else
    {
        printf("%s is not uppercase\n", str3);
    }

    if (ft_str_is_uppercase(str4))
    {
        printf("%s is uppercase\n", str4);
    }
    else
    {
        printf("%s is not uppercase\n", str4);
    }
    return 0;
}*/
