/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoughazd <zoughazd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:32:59 by zoughazd          #+#    #+#             */
/*   Updated: 2024/06/30 16:51:28 by zoughazd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	kokab(int x, int y, int j, int i)
{
	while (j <= x)
	{
		if (i == 1 || i == y)
		{
			if (j == 1 || j == x)
				ft_putchar('o');
			else
			{
				ft_putchar('-');
			}
		}
		else
		{
			if (j == 1 || j == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		kokab (x, y, j, i);
		i++;
		write(1, "\n", 1);
	}
}
