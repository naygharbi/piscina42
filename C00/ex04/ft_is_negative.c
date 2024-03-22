/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:51:24 by najgharb          #+#    #+#             */
/*   Updated: 2023/09/24 15:30:37 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	y;
	char	p;

	p = 'P';
	y = 'N';
	if (n >= 0)
	{
		write (1, &p, 1);
	}
	if (n < 0)
	{		
		write (1, &y, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(109);
	return (0);
}
*/