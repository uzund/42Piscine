/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 06:07:09 by duzun             #+#    #+#             */
/*   Updated: 2021/10/30 14:10:53 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	lowcase;
	int	upcase;

	i = 0;
	while (*(str + i))
	{
		upcase = (str[i] >= 'A' && str[i]);
		lowcase = (str[i] >= 'a' && str[i]);
		if (!upcase && !lowcase)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
