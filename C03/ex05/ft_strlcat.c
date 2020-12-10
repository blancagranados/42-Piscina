/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 09:14:17 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/10 13:28:36 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		n += size;
	else
	{
		n += i;
	}
	while (src[j] && (i + 1) < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + j);
}

int	main(void)
{
	char a[] = "sdfsd";
	char b[] = "sdf";

	printf("%u\n", ft_strlcat(a, b, 6));
	printf("%lu\n", strlcat(a, b, 6));
	return (0);
}
