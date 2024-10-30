/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:12:12 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 11:41:05 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	i;
	int	c;

	a = 1;
	i = 0;
	c = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			a = a * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		i++;
	}
	return (a * c);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("				   ----+-+42a3a"));
	return 0;
}*/
