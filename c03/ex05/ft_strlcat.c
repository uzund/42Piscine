/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:24:41 by duzun             #+#    #+#             */
/*   Updated: 2021/11/05 00:58:12 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
// #include	<stdio.h>
// #include	<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ilk;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	ilk = j;
	while (src[i])
	{
		if (j < size - 1)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (ilk);
}
/*
int	main(void)
{
	char	a[11] = "Davut";
	char	b[] = "Ahmetkkkkk";

	printf("%d",ft_strlcat(a, b, sizeof(a)));

	printf("%s\n", a);
	return (0);
}
*/
