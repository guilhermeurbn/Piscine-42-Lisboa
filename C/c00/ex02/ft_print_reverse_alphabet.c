/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:37:23 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/22 12:29:47 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	oi;

	oi = 'z';
	while (oi >= 'a')
	{
		write(1, &oi, 1);
		oi--;
	}
}
/*int main()
{
	ft_print_reverse_alphabet();
	return 20;
}*/
