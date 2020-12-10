/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:56:50 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/07 12:32:09 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int n;

	n = 0;
	while (n < (size - 1))
	{
		if (tab[n] > tab[n + 1])
		{
			x = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = x;
			n = 0;
		}
		else
		{
			n++;
		}
	}
}
