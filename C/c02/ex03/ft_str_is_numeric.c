/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:58:26 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/24 10:58:28 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*int main()
{
    char a[] = "";
    char verifica;

    verifica = ft_str_is_numeric(a);
    printf("%d", verifica);
    return 0;
}*/
