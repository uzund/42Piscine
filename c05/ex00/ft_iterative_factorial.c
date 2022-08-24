/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:22:22 by duzun             #+#    #+#             */
/*   Updated: 2021/11/11 19:30:02 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include	<stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	rpas;

	rpas = 1;
	if (nb < 0)
		return (0);
	else if (nb < 1)
		return (1);
	else
	{
		while (nb > 0)
		{
			rpas *= nb;
			nb--;
		}
		return (rpas);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
*/
