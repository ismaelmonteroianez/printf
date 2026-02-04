/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printminhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:49:49 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/04 10:01:59 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printminhex(unsigned long nbr)
{
	int			n;
	const char	*dic_hex = "0123456789abcdef";
	char		a;

	n = 0;
	if (nbr >= 16)
	{
		n = n + ft_printminhex(nbr / 16);
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
