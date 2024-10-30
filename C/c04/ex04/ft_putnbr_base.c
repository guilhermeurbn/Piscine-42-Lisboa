/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:40:06 by guisanto          #+#    #+#             */
/*   Updated: 2024/10/07 11:55:24 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				size;
	unsigned int	nb;

	size = check_base(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= (unsigned int)size)
	{
		ft_putnbr_base(nb / size, base);
		ft_putchar(base[nb % size]);
	}
	else
		ft_putchar(base[nb % size]);
}
/*#include <stdio.h>
int main()
{
	ft_putnbr_base(111, "0123456789");// Testando com diferentes números e bases
	printf("\n");

	ft_putnbr_base(-42, "01");
	printf("\n");

	ft_putnbr_base(-42, "0123456789ABCDEF");
	printf("\n");
	return 0;
}*/
