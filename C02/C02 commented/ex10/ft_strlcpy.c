/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:56:56 by hde-souz          #+#    #+#             */
/*   Updated: 2023/03/21 22:17:11 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i; //limite de caracter do size
	
	i = 0; // start in zero, e vai iterando atraves de ft_strlen e retornando i

	if (size == 0) // se zero, devolve o ft_strlen que retorna i = zero
	{
		return (ft_strlen(src));
	}
	
	while (src[i] != '\0' && i < size -1) //loop enquanto source existir e o tamanho for menor que o size (limite) // talvez size -1 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; //ao fim do loop quebra o ciclo com null e retorna src
	return (ft_strlen(src));   
}

int	main(void)
{
	char src[] = "Hello, world!";
	char dest[99]; //mesmo sendo 99, o meu len definido abaixo vai limitar isso pra impedir overflow
	unsigned int len; //tenho arrays src e dest + len que eu mesmo defino

	len = ft_strlcpy(dest, src, 3); //defino len a 3 pra impedir que mais do que 3 caracteres sejam passados
	printf("Copied string: %s\n", dest);              
	printf("Length of copied string: %u\n", len);

}