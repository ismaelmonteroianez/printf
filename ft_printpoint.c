/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:35:10 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/04 10:03:34 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpoint(unsigned long p)
{
	int				n;

	if (!p)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	n = 2;
	n = n + ft_printminhex(p);
	return (n);
}
