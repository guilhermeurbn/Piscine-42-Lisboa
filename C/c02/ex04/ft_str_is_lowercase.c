/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:07:30 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/24 14:28:07 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'a' || str[c] > 'z')
			return (0);
		c++;
	}
	return (1);
}
/*int main()
{
    char a[] = "aolalaaaa";
    char verifi;

    verifi = ft_str_is_lowercase(a);
    printf("%d", verifi);
    return 0;
}*/
