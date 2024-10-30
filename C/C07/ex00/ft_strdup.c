/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:02:59 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/08 10:54:36 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}
char *ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
/*#include <stdio.h>
int main()
{
	char *a = "ola";
	char *duplicate;

	duplicate = ft_strdup(a);
	printf("%s", duplicate);
	return (0);
}*/
