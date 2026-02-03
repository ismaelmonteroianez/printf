/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:15:46 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/03 20:57:12 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printargs(char str, va_list args)
{
	int	n;

	n = 0;
	if (str == '%')
		n = n + write(1, "%", 1);
	else if (str == 'c')
		n = n + ft_printchar(va_arg(args, int));
	else if (str == 's')
		n = ft_printstr(va_arg(args, char *));
	else if (str == 'd' || str == 'i')
		n = ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		n = ft_printnbr((unsigned long)va_arg(args, unsigned int));
	else if (str == 'x')
		n = ft_printminhex(va_arg(args, unsigned int));
	else if (str == 'X')
		n = ft_printmaxhex(va_arg(args, unsigned int));
	else if (str == 'p')
		n = ft_printpoint(va_arg(args, unsigned int));
	return (n);
}

int	ft_printf(const char *fstr, ...)
{
	va_list	args;
	int		i;
	int		n;

	i = 0;
	n = 0;
	va_start(args, fstr);
	while (fstr[i] != '\0')
	{
		if (fstr[i] == '%')
		{
			i++;
			n = n + ft_printargs(fstr[i], args);
			i++;
		}
		else
		{
			ft_printchar(fstr[i]);
			i++;
			n++;
		}
	}
	va_end(args);
	return (n);
}
/*
#include <limits.h>

int	main(void)
{
	char	c;

	c = 'z';
	ft_printf("Hola %c %%a\n", c);
	printf("%d\n", printf("Original: %s\n", NULL));
	printf("%d\n", ft_printf("Ismaelll: %s\n", NULL));
	printf("%d\n", printf("Num: %d\n", 1000));
	printf("%d\n", ft_printf("Num: %d\n", INT_MIN));
	printf("%d\n", ft_printf("%x", 1000));
	printf("%d\n", printf("%x", 1000));
	return (0);
}
*/