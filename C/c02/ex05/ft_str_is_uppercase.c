/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:25:40 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/24 11:02:08 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 65 || str[c] > 90)
			return (0);
		c++;
	}
	return (1);
}
/*int main()
{
    char a[] = "D";
    char verifi;

    verifi = ft_str_is_uppercase(a);
    printf("%d", verifi);
    return 0;
}*/
