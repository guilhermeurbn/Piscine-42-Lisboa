/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:51:44 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 14:51:58 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
/*#include <stdio.h>

int main()
{
	int a = 1;
	int result;

	result = ft_iterative_factorial(a);
	printf("%d\n", result);
	return (0);
}*/
