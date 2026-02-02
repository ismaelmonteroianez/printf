/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:15:46 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/02 18:22:22 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_printargs(char *str, int n)
{
	if (str == '%')
		write(1, '%', 1);
		n = n++;
	else if (str == 'c')
		ft_printchar();
		n = n++;
	else if (str == 's')
		n = n + ft_printstr();
	else if (str == 'd' || str == 'i')
		ft_printnbr()
		
	
}



int	ft_printf(const char *fstr, ...)
{
	va_list	args;
	int	n;

	n = 0;
	vs_start(args, fstr);
	while(fstr[n] != '\0')
	{
		if(fstr[n] == '%')
		n++;
		ft_printargs(fstr[n], n);
	}
	n++;
	return(n);
}

