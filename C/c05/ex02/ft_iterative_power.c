/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:56:18 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 14:56:27 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;
	int	resul;

	i = 1;
	a = 1;
	resul = 1;
	if (nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		resul = resul * nb;
		i++;
	}
	return (resul);
}
/*#include <stdio.h>
int main()
{
	int a = 3;
	int b = 3;
	int result;

	result = ft_iterative_power(a, b);
	printf("%d", result);
	return (0);
}*/
