/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:07:11 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 11:16:19 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	int raiz;

	raiz = 2500;
	printf("%d", ft_sqrt(raiz));
	return (0);
}*/
