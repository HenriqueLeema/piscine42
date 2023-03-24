/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:13:58 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/13 21:26:40 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar(v[i++]);
		write(1, "\n", 2);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}
/*
void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int	flag;
	int	base;

	if (n <= 0 || n > 10)
	{
		write(1, "Insert\n", 7);
		return ;
	}
	for (int i=0; i<n; ++i)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
	}

	print_array(v, n, v_max[0]);

	while (v[0] != v_max[0])
	{
		flag = n-1;
		while (v[flag] == v_max[flag])
			--flag;
		base = ++(v[flag]);

		while (flag < n)
			v[++flag] = ++base;
		print_array(v, n, v_max[0]);
	}
}*/
/*
int	main(void)
{
	ft_print_combn(2);
}*/
