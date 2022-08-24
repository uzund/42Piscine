/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:38:51 by duzun             #+#    #+#             */
/*   Updated: 2021/11/11 19:45:17 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include	<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (nb);
}
/*
int	main(void)
{
	printf("%d - \n", ft_recursive_power(2, 4));
	return (0);
}
*/
