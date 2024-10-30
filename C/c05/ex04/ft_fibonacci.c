/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:17:08 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 11:16:46 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	result;

	result = 0;
	i = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
/*#include <stdio.h>
int main()
{
	int i;
	int result;

	i = 3;
	result = ft_fibonacci(i);
	printf("%d", result);
	return(0);
}*/
