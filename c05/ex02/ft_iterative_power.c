/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:47:29 by duzun             #+#    #+#             */
/*   Updated: 2021/11/12 02:04:17 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include	<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	sayi;

	sayi = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power > 1)
		{
			sayi *= nb;
			power--;
		}
		return (sayi);
	}
}
/*
int	main(void)
{
	printf("%d - \n", ft_iteractive_power(2, 4));
	return (0);
}
*/
