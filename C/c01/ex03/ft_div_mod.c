/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:54:34 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/23 13:44:01 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*int main()
{
	int a;
	int b;
	int x;
	int y;

	a = 10;
	b = 6;
	ft_div_mod(a, b, &x, &y);
	printf("%d\n",x);
	printf("%d",y);
}*/
