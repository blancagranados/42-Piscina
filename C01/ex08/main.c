/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:31:03 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/07 12:31:29 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int array[5] = {1, 2, 5, 4, 3};
	ft_sort_int_tab(array, 5);
	printf("El nuevo es: {%d, %d, %d, %d, %d}", array[0], array[1], array[2], array[3], array[4]);
	return (0);
}