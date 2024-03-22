/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:06:53 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/04 20:40:15 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'a' || str[cont] > 'z'))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

// int	main(void)
// {
// char test[] = "bgasdsadvhg";
// printf("%d\n", ft_str_is_lowercase(test));
// }
