/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:21:41 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/24 09:52:45 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a' || str[c] > 'z' ) && (str[c] < 'A' || str[c] > 'Z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*int main()
{
    char a[] = "asdfghjkuytewertyuj";

    int verificacao;

    verificacao = ft_str_is_alpha(a);
    printf("%d", verificacao);
    return 0;
}*/
