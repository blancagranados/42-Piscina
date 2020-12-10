/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:13:34 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/07 18:35:03 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 2;
	b = 7;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}
