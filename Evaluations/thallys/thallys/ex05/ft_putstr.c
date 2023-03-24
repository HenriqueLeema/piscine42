/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:14:36 by tlima-da          #+#    #+#             */
/*   Updated: 2023/03/22 22:59:16 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = sizeof(str);
	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		i++;
	}
}

int main(void)
{
    char a[20] = "Hello";
    ft_putstr(a);
    return (0);
}
