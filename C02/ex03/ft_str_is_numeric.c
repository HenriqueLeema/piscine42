/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numberic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:39:11 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/21 22:35:12 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
    char str1[] = "AgoraVai";
    char str2[] = "12345";
    char str3[] = "testing123";
    char str4[] = ""; // vazia retorna 1, ok

    if (ft_str_is_numeric(str1))
    {
        printf("%s is numerical\n", str1);
    }
    else
    {
        printf("%s is not numerical\n", str1);
    }

    if (ft_str_is_numeric(str2))
    {
        printf("%s is numerical\n", str2);
    }
    else
    {
        printf("%s is not numerical\n", str2);
    }

    if (ft_str_is_numeric(str3))
    {
        printf("%s is numerical\n", str3);
    }
    else
    {
        printf("%s is not numerical\n", str3);
    }

    if (ft_str_is_numeric(str4))
    {
        printf("%s is numerical\n", str4);
    }
    else
    {
        printf("%s is not numerical\n", str4);
    }

	

    return 0;
}*/
