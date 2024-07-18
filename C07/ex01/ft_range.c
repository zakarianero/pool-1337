/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoughazd <zoughazd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:51:00 by zoughazd          #+#    #+#             */
/*   Updated: 2024/07/15 09:50:54 by zoughazd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;
	int	size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * size);
	if (p == (NULL))
	{
		return (NULL);
	}
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
