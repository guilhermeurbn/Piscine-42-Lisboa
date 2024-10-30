/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:30:12 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/23 13:42:56 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main()
{
    int x;
    int y;

    x = 10;
    y = 3;
    ft_ultimate_div_mod(&x, &y);
    printf("%d\n", x);
    printf("%d", y);
}*/
