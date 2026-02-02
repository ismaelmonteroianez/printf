/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:20:31 by ismonter          #+#    #+#             */
/*   Updated: 2026/02/02 17:23:51 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printstr(char *str)
{
	int	i;
	int	n;

	i = 0;

	if (str == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		ft_printstr(str[i]);
		i++;
		n++;
	}
	return (n);
}