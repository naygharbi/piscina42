/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:17:39 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/10 10:13:18 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] != '\0' || s2[cont] != '\0')
	{
		if (s1[cont] < s2[cont])
			return (-1);
		if (s1[cont] > s2[cont])
			return (1);
		cont++;
	}
	return (0);
}

int	main(void)
{
	char	s1[10] = "Hola";
	char	s2[15] = "hola";

	printf("%d", ft_strcmp(s1, s2));
}
