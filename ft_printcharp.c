/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcharp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:17:12 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/28 00:54:21 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lenghtofhex(unsigned long int number)
{
	int	i;

	i = 0;
	while (number != 0)
	{
		number /= 16;
		i++;
	}
	return (i);
}

int	ft_printcharp(va_list arg)
{
	void				*x;
	int					size;
	unsigned long int	nb;

	x = va_arg(arg, void *);
	write(1, "0x", 2);
	nb = (unsigned long int)x;
	converter(nb, "0123456789abcdef");
	size = lenghtofhex(nb);
	if (nb == 0)
		size = 1;
	return (size + 2);
}
