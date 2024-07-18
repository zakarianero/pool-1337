/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoughazd <zoughazd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:17:47 by zoughazd          #+#    #+#             */
/*   Updated: 2024/07/13 12:01:11 by zoughazd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_stcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] - s2[i]));
		}
		i++;
	}
	return ((s1[i] - s2[i]));
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	char	*swp;
	int		j;
	int		i;

	i = 1;
	j = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_stcmp(av[i], av[j]) > 0)
			{
				swp = av[i];
				av[i] = av[j];
				av[j] = swp;
			}
			j++;
		}
		putstr(av[i]);
		putstr("\n");
		i++;
	}
}
