/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:59:59 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/04 11:30:42 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *fstr, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printnbr(long nbr);
int	ft_printposnbr(unsigned long nbr);
int	ft_printminhex(unsigned long nbr);
int	ft_printmaxhex(unsigned long nbr);
int	ft_printpoint(unsigned long p);

#endif