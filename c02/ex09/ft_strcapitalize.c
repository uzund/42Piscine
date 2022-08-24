/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 05:16:09 by duzun             #+#    #+#             */
/*   Updated: 2021/10/30 17:50:46 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_sayilar(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_kucuk_harfler(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_buyuk_harfler(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tum_harfler(char c)
{
	return (ft_kucuk_harfler(c) || ft_buyuk_harfler(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!i && ft_kucuk_harfler(str[i]))
			str[i] -= ' ';
		else if (ft_tum_harfler(str[i]))
		{
			if (!ft_tum_harfler(str[i - 1]) && !ft_sayilar(str[i - 1]))
				if (ft_kucuk_harfler(str[i]))
					str[i] -= ' ';
			if (ft_tum_harfler(str[i - 1]) || ft_sayilar(str[i - 1]))
				if (ft_buyuk_harfler(str[i]))
					str[i] += ' ';
		}
		i++;
	}
	return (str);
}
