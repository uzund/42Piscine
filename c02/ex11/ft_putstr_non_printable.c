/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:09:20 by duzun             #+#    #+#             */
/*   Updated: 2021/10/30 14:19:54 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	karakter;

	i = 0;
	while (*(str + i))
	{
		karakter = str[i];
		if (str[i] >= ' ' && str[i] != 127)
			ft_putchar(karakter);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[karakter / 16]);
			ft_putchar("0123456789abcdef"[karakter % 16]);
		}
		++i;
	}
}
