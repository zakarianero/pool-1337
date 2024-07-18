/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoughazd <zoughazd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:56:55 by zoughazd          #+#    #+#             */
/*   Updated: 2024/07/07 15:50:00 by zoughazd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_leng;
	unsigned int	src_leng;
	unsigned int	i;

	dest_leng = 0;
	src_leng = 0;
	i = 0;
	while (dest[dest_leng] != '\0')
		dest_leng++;
	while (src[src_leng] != '\0')
	{
		src_leng++;
	}
	if (size <= dest_leng)
	{
		return (size + src_leng);
	}
	while (src[i] != '\0' && (dest_leng + i) < (size - 1))
	{
		dest[dest_leng + i] = src[i];
		i++;
	}
	dest[dest_leng + i] = '\0';
	return (dest_leng + src_leng);
}
