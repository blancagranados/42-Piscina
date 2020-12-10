/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:20:15 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/10 13:25:52 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char  s1[] = "12345";
	char  s2[] = "1234";

	printf("%d\n", ft_strncmp(s1, s2, 0));
	return (0);
}
