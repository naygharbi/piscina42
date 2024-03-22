/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:26:18 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/04 20:42:03 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'A' && str[cont] <= 'Z'))
		{
			str[cont] += 32;
		}
		cont++;
	}
	return (str);
}

// int	main(void)
// {
// char test[] = "NAYLA";
// printf("%s\n", ft_strlowcase(test));
// }