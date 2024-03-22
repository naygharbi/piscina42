/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:19:06 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/04 20:41:36 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'a' && str[cont] <= 'z'))
		{
			str[cont] -= 32;
		}
		cont++;
	}
	return (str);
}

// int	main(void)
// {
// char test[] = "hsghdgd";
// printf("%s\n", ft_strupcase(test));
// }