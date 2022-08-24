/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 01:22:19 by duzun             #+#    #+#             */
/*   Updated: 2021/11/04 01:56:02 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	isaret;
	int	sayi;

	i = 0;
	isaret = 1;
	sayi = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = (str[i] - '0') + (sayi * 10);
		i++;
	}
	return (sayi * isaret);
}
/*
int		main(void)
{
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));

}
*/
