/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:24:07 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/03 20:25:31 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printnbr(long nbr)
{
	char	a;
	int		n;

	n = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
		n++;
	}
	if (nbr >= 10)
	{
		n = n + ft_printnbr(nbr / 10);
		a = nbr % 10 + '0';
		write(1, &a, 1);
		n++;
		return (n);
	}
	a = nbr + 48;
	write(1, &a, 1);
	n++;
	return (n);
}
