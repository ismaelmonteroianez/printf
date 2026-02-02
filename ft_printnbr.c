/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:24:07 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/02 17:41:20 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printnbr(long nbr)
{
	char	a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= 10)
	{
		ft_printnbr(nbr / 10);
		a = nbr % 10 + 48;
		write(1, &a, 1);
		return ;
	}
	a = nbr + 48;
	write(1, &a, 1);
}