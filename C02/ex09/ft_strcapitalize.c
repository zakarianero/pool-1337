/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoughazd <zoughazd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:12:10 by zoughazd          #+#    #+#             */
/*   Updated: 2024/07/03 21:55:43 by zoughazd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	c;

	a = 0;
	c = 1;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (c == 1)
			{
				str[a] = str[a] - 32;
			}
			c = 0;
		}
		else if (str[a] >= '0' && str[a] <= '9')
			c = 0;
		else
			c = 1;
		a++;
	}
	return (str);
}
