/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:25:54 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/04 20:39:26 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'A' || str[cont] > 'Z') && (str[cont] < 'a'
				|| str[cont] > 'z'))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

// int	main(void)
// {
// char test[] = "Nayla";
// printf("%d\n", ft_str_is_alpha(test));
// }