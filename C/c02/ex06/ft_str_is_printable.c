/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:37:26 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/24 13:56:20 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*int main()
{
    char a[] = "                              ";
    char verifi;

    verifi = ft_str_is_printable(a);
    printf("%d", verifi);
    return 0;
}*/
