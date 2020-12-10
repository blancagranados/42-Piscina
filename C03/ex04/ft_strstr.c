/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:32:47 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/10 13:26:53 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int i;
	int j;

	n = 0;
	while (to_find[n])
		n++;
	if (n == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j + 1 == n)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (00);
}

int	main()
{
	char str[] = "abcdefhi";
	char fnd[] = "def";
	printf("%s", ft_strstr(str, fnd));
	return (0);
}