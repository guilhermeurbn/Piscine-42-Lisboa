/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:45:44 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 11:15:38 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	else
	{
		if (i <= power)
		{
			result = nb * ft_recursive_power(nb, power - i);
			i++;
		}
	}
	return (result);
}
/*#include <stdio.h>
int main()
{
	int i;
	int a;
	int result;

	i = 3;
	a = 4;
	result = ft_recursive_power(i, a);
	printf("%d", result);
	return 0;
}*/
