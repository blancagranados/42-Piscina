/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:19:34 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/02 13:39:11 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int u;
	int d;

	u = 0;
	while (u <= 99)
	{
		d = u + 1;
		while (d <= 99)
		{
			ft_putchar((u / 10) + '0');
			ft_putchar((u % 10) + '0');
			ft_putchar(' ');
			ft_putchar((d / 10) + '0');
			ft_putchar((d % 10) + '0');
			if (u != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		u++;
	}
}
