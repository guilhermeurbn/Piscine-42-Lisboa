/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:35:01 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 14:58:22 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(nb - i);
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int main()
{
	int i;
	int result;

	i = 4;
	result = ft_recursive_factorial(i);
	printf("%d", result);
	return 0;
}*/
