/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:24:43 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/24 11:14:06 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
/*int main()
{
    char a[] = "OLAA, TUDO BEM?";
    ft_strlowcase(a);
    printf("%s", a);
    return 0;
}*/
