/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:35:10 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/03 20:55:30 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpoint(unsigned int nbr)
{
	int	n;

	write(1, "0x", 2);
	n = 2;	
	n = n + ft_printminhex(nbr);
	return (n);
}