/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:36:56 by duzun             #+#    #+#             */
/*   Updated: 2021/11/12 04:32:42 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include	<stdio.h>
// #include	<string.h>
#include	<stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (dst == 0)
		return (0);
	ft_strcpy(dst, src);
	return (dst);
}
/*
int	main(void)
{
	char	*a;

	a[] = "Davut UZUN";
	printf("%s\n", ft_strdup(a));
	printf("%s", strdup(a));
	return (0);
}
*/
