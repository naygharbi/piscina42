/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:45:40 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/04 20:40:37 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'A' || str[cont] > 'Z'))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

// int	main(void)
// {
// char test[] = "";
// printf("%d\n", ft_str_is_uppercase(test));
// }