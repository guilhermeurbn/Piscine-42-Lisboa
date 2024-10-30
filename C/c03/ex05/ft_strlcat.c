/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:17:46 by guisanto          #+#    #+#             */
/*   Updated: 2024/09/25 19:22:20 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	taman_dest;
	unsigned int	taman_src;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	taman_dest = j;
	while (src[i] != '\0')
		i++;
	taman_src = i;
	if (size <= taman_dest)
		return (size + taman_src);
	i = 0;
	while (src[i] != '\0' && taman_dest + i < size - 1)
	{
		dest[taman_dest + i] = src[i];
		i++;
	}
	dest[taman_dest + i] = '\0';
	return (taman_dest + taman_src);
}

/*int main()
{
	char a[15] = "olaa, ";
	char b[] = "tudo bem?";

	printf("tamanho do buffer: %u\n", ft_strlcat(a, b, 15));
	printf("resultado da string: %s", a);
	return 0;
}*/
