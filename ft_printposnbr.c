/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printposnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:46:52 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/02 17:48:12 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	printposnbr(long nbr)
{
	char	a;
	
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