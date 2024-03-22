/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:03:52 by najgharb          #+#    #+#             */
/*   Updated: 2023/09/24 15:35:36 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
/*void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjhgfedcba", 26);
}
*/
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
*/