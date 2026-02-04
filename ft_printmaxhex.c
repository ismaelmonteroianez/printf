/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmaxhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:32:03 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/04 11:30:30 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printmaxhex(unsigned long nbr)
{
	int			n;
	const char	*dic_hex = "0123456789ABCDEF";
	char		a;

	n = 0;
	if (nbr >= 16)
	{
		n = n + ft_printmaxhex(nbr / 16);
		a = dic_hex[nbr % 16];
		write(1, &a, 1);
		n++;
		return (n);
	}
	a = dic_hex[nbr % 16];
	write (1, &a, 1);
	n++;
	return (n);
}
