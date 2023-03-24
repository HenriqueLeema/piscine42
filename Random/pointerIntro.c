/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointerIntro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:13:37 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/19 21:45:35 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void fl(int *ptr)
{
	*ptr = *ptr + 1;
}

int	main(void)
{
	int	c;
	int *ptr;

	ptr = &c;
	c = 41;

	printf("%d\n", c);
	fl(ptr);
	printf("%d\n", c);
	return (0);
}