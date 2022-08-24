/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:21:28 by duzun             #+#    #+#             */
/*   Updated: 2021/11/12 21:46:52 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
// #include	<stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*a;

	a = malloc(sizeof(strs));
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			a[x++] = strs[i][j++];
		}
		j = 0;
		while (sep[j])
		{
			a[x++] = sep[j++];
		}
		i++;
	}
	a[x] = '\0';
	return (a);
}
/*
int	main(void)
{	
	char *text[3]  = {"Davut", "acemi", "uzun"};

	printf("%s\n", ft_strjoin(3, text, " - "));
}
*/
