/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najgharb <najgharb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:39:55 by najgharb          #+#    #+#             */
/*   Updated: 2023/10/12 09:24:09 by najgharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
        if (s1[i] > s2[i])
		{
        return (-1);
    	}
        i++;
	}
	return (0);
}

int main (void)
{
    char s1[] = "naya";
    char s2[] = "Naya";
    printf("%d", ft_strncmp(s1, s2, 3));
    return (0);
}