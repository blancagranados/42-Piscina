/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:08:04 by bgranado          #+#    #+#             */
/*   Updated: 2020/12/08 20:09:01 by bgranado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 65 || (str[i - 1] > 90 && str[i - 1] < 97) ||
			str[i - 1] > 122) && (str[i - 1] < 48 || str[i - 1] > 57) &&
				(str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if (((str[i - 1] >= 48 && str[i - 1] <= 57) || (str[i - 1] >= 65 &&
			str[i - 1] <= 90) || (str[i - 1] >= 97 && str[i - 1] <= 122)) &&
				(str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(a));
	printf("\n");
}
