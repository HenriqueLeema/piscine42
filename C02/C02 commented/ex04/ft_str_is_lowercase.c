/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:45:02 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/20 23:48:37 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
    char str1[] = "meucu";
    char str2[] = "TEUCU";
    char str3[] = "VOSSOcu";
    char str4[] = ""; // vazia retorna 1, ok

    if (ft_str_is_lowercase(str1))
    {
        printf("%s is lowercase\n", str1);
    }
    else
    {
        printf("%s is not lowercase\n", str1);
    }

    if (ft_str_is_lowercase(str2))
    {
        printf("%s is lowercase\n", str2);
    }
    else
    {
        printf("%s is not lowercase\n", str2);
    }

    if (ft_str_is_lowercase(str3))
    {
        printf("%s is lowercase\n", str3);
    }
    else
    {
        printf("%s is not lowercase\n", str3);
    }

    if (ft_str_is_lowercase(str4))
    {
        printf("%s is lowercase\n", str4);
    }
    else
    {
        printf("%s is not lowercase\n", str4);
    }
    return 0;
}