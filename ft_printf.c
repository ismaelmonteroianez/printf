/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:15:46 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/07 13:13:55 by ismonter         ###   ########.fr       */
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
		n = ft_printminhex((unsigned long)va_arg(args, unsigned int));
	else if (str == 'X')
		n = ft_printmaxhex((unsigned long)va_arg(args, unsigned int));
	else if (str == 'p')
		n = ft_printpoint(va_arg(args, unsigned long));
	return (n);
}

int	ft_printf(const char *fstr, ...)
{
	va_list	args;
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (!fstr)
		return (-1);
	va_start(args, fstr);
	while (fstr[i] != '\0')
	{
		if (fstr[i] == '%')
		{
			n = n + ft_printargs(fstr[++i], args);
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

#include <limits.h>

int	main(void)
{
	char	c;

	c = 'z';
	char *p = "Holaaa";
	ft_printf("Hola %c %%a\n", c);
	printf("%d\n", printf("Original: %s\n", (char *)NULL));
	printf("%d\n", ft_printf("Ismaelll: %s\n", NULL));
	printf("%d\n", printf("Num: %d\n", 1000));
	printf("%d\n", ft_printf("Num: %d\n", INT_MIN));
	printf("%d\n", ft_printf("%X\n", 0x1000));
	printf("%d\n", printf("%X\n", 0x12ef76));
	printf("%d\n", ft_printf("%p\n", p));
	printf("%d\n", printf("%p\n", p));
	printf("%d\n", printf(NULL));
	printf("%d\n", ft_printf(NULL));

	return (0);
}
