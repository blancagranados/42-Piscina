/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:39:44 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/08 20:10:49 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int i;
	int respuesta;

	respuesta = 1;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			respuesta = 0;
		}
		i++;
	}
	return (respuesta);
}

int		main(void)
{
	char *a = "AAA∫";

	printf("%d\n", ft_str_is_printable(a));
	return (0);
}
