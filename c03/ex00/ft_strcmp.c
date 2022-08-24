/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 00:09:31 by duzun             #+#    #+#             */
/*   Updated: 2021/11/03 19:06:30 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
// #include	<stdio.h>
// #include	<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*a = "uzun";
	char	*b = "davutt";

	printf("%d\n", ft_strcmp(a,b));
	printf("%d", strcmp(a,b));
	return (0);
}
*/
