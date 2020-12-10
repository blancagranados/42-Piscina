/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:19:50 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/08 21:06:47 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int resultado;

	i = 0;
	resultado = 0;
	while (src[resultado] != '\0')
	{
		resultado++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (resultado);
}

int		main(void) 
{
	char dest[10];
	char dest1[10];
	char *src = "2023233";

	ft_strlcpy(dest ,src, 4);
	printf("%s", dest);
	printf("\n");
	printf("%s", dest1);
	return 0;
}
