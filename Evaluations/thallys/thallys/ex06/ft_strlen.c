/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:14:46 by tlima-da          #+#    #+#             */
/*   Updated: 2023/03/21 21:45:23 by tlima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	r;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%d - %c\n", i, str[i]);
		i++;
	}
	printf("Str tem %d caracteres\n", (i));
	r = i - 1;
}

/*int main(void)
{
    ft_strlen("Hello");
    return (0);
}*/
