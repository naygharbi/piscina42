/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:27:14 by najgharb          #+#    #+#             */
/*   Updated: 2023/09/27 11:16:30 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	*a;
	int	*b;
	int	g;
	int	j;

	g = 10;
	j = 3;
	a = &g;
	b = &j;
	ft_ultimate_div_mod(a, b);
	printf("resultado: %d\n", *a);
	printf("resto: %d\n", *b);
	return (0);
}
*/