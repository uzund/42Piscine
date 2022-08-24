/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:37:56 by duzun             #+#    #+#             */
/*   Updated: 2021/11/12 06:05:31 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int		fark;
	int		i;
	int		*tampon;

	if (min >= max)
		return (0);
	fark = max - min;
	tampon = malloc(fark * sizeof(int));
	if (!tampon)
		return (0);
	i = 0;
	while (i < fark)
	{
		tampon[i] = min + i;
		i++;
	}
	return (tampon);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
