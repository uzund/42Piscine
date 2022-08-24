/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:58:48 by duzun             #+#    #+#             */
/*   Updated: 2021/11/11 21:54:57 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	sayi;

	sayi = nb;
	if (sayi <= 0)
	{
		return (0);
	}
	if (sayi == 1)
	{
		return (1);
	}
	i = 2;
	if (sayi >= 2)
	{
		while (i * i <= sayi)
		{
			if (i * i == sayi)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("Karakök %d için %d\n", -850, ft_sqrt(-850));
	printf("Karakök %d için %d\n", 0, ft_sqrt(0));
	printf("Karakök %d icin %d\n", 1, ft_sqrt(1));
	printf("Karakök %d için %d\n", 2, ft_sqrt(2));
	printf("karakök %d için %d\n", 9, ft_sqrt(9));
	printf("Karakök %d için %d\n", 2147395600, ft_sqrt(2147395600));
	printf("Karakök %d için %d\n", 20286016, ft_sqrt(20286016));
	return (0);
}
*/
