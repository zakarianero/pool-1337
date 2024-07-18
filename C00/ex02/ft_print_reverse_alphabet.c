/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoughazd <zoughazd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:03:50 by zoughazd          #+#    #+#             */
/*   Updated: 2024/06/26 20:16:24 by zoughazd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	b;

	b = 'z';
	while (b >= 'a')
	{
		write(1, &b, 1);
		b--;
	}
}
