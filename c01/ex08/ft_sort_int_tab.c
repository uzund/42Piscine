/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:25:52 by duzun             #+#    #+#             */
/*   Updated: 2021/10/27 14:11:32 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	index;
	int	takas;

	index = 0;
	while (index <= size - 1)
	{
		i = 0;
		while (i <= size - 1)
		{
			if (tab[index] < tab[i])
			{
				takas = tab[index];
				tab[index] = tab[i];
				tab[i] = takas;
			}
			i++;
		}
		index++;
	}
}
