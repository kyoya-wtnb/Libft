/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 18:05:20 by kwatanab          #+#    #+#             */
/*   Updated: 2019/04/23 18:05:21 by kwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **tab)
{
	int x;
	int y;

	y = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			ft_putchar(tab[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
