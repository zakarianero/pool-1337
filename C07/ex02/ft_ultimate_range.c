/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoughazd <zoughazd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:31:07 by zoughazd          #+#    #+#             */
/*   Updated: 2024/07/14 10:11:46 by zoughazd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * (size));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
