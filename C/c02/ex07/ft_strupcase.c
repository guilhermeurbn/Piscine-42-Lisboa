/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:14:08 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/24 11:12:04 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
/*int main()
{
    char a[]=  "ola, tudo bem?";
    ft_strupcase(a);
    printf("%s", a);
    return 0;
}*/
