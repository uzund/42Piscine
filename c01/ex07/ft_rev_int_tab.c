/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:37:33 by duzun             #+#    #+#             */
/*   Updated: 2021/10/27 18:31:31 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	takas;

	index = 0;
	while (index < size / 2)
	{
		takas = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = takas;
		index++;
	}
}
