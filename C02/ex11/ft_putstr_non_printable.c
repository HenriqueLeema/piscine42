/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:57:24 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/21 23:06:38 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	x;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				x = 256 + str[i];
			else
				x = str[i];
			ft_putchar("0123456789abcdef"[x / 16]);
			ft_putchar("0123456789abcdef"[x % 16]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "Ola\ntudo bem?";
	ft_putstr_non_printable(str);
}*/
