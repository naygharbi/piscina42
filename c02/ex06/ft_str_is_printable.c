/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:33:56 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/04 20:41:18 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 32 || str[cont] > 126))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

// int	main(void)
// {
// char test[] = "ñ";
// printf("%d\n", ft_str_is_printable(test));
// }