/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:51:00 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/20 23:53:11 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str [i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
    char str1[] = "*&^*g";
    char str2[] = "TEUCU";
    char str3[] = "VOSSOcu";
    char str4[] = ""; // vazia retorna 1, ok

    if (ft_str_is_printable(str1))
    {
        printf("%s is printable\n", str1);
    }
    else
    {
        printf("%s is not printable\n", str1);
    }

    if (ft_str_is_printable(str2))
    {
        printf("%s is printable\n", str2);
    }
    else
    {
        printf("%s is not printable\n", str2);
    }

    if (ft_str_is_printable(str3))
    {
        printf("%s is printable\n", str3);
    }
    else
    {
        printf("%s is not printable\n", str3);
    }

    if (ft_str_is_printable(str4))
    {
        printf("%s is printable\n", str4);
    }
    else
    {
        printf("%s is not printable\n", str4);
    }
    return 0;
}