/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:52:00 by najgharb          #+#    #+#             */
/*   Updated: 2023/09/27 11:16:15 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 2;
	b = 4;
	pa = &a;
	pb = &b;
	printf ("%d", a);
	printf ("%d", b);
	ft_swap(pa, pb);
	printf ("%d", a);
	printf ("%d", b);
}
*/