/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 00:09:31 by duzun             #+#    #+#             */
/*   Updated: 2021/11/03 19:32:24 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
// #include	<stdio.h>
// #include	<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
int	main(void)
{
	char	*a = "alicety";
	char	*b = "alicznz";

	printf("%d\n", ft_strncmp(a, b, 5));
	printf("%d", strncmp(a, b, 5));
	return (0);
}
*/
