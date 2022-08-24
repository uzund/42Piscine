/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:34:57 by duzun             #+#    #+#             */
/*   Updated: 2021/11/11 19:36:44 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include	<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}
*/
