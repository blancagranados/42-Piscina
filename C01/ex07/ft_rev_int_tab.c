/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:54:02 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/07 11:55:07 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int n;
	int i;

	i = 0;
	n = size - 1;
	while (n >= i)
	{
		x = tab[n];
		tab[n] = tab[i];
		tab[i] = x;
		n--;
		i++;
	}
}
