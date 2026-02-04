/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printposnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:46:52 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/04 11:05:42 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printposnbr(unsigned long nbr)
{
	char	a;
	int		n;

	n = 0;
	if (nbr >= 10)
	{
		n = n + ft_printposnbr(nbr / 10);
		a = nbr % 10 + 48;
		write(1, &a, 1);
		n++;
		return (n);
	}
	a = nbr + 48;
	write(1, &a, 1);
	n++;
	return (n);
}
