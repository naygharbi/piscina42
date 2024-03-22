/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:58:53 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/04 20:30:11 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < '0' || str[cont] > '9'))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

// int	main(void)
// {
// char test[] = "02";
// printf("%d\n", ft_str_is_numeric(test));
// }