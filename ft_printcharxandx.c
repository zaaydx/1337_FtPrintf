/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcharxandX.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:38:20 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/28 12:15:34 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	converter(unsigned long int number, char *str)
{
	if (number < 16)
	{
		ft_putchar(str[number % 16]);
	}
	else
	{
		converter(number / 16, str);
		converter(number % 16, str);
	}
}

int	ft_lenghtputnbr(unsigned int nbr, char *base)
{
	int	i;

	i = 0;
	converter(nbr, base);
	i = lenghtofhex(nbr);
	if (nbr == 0)
		i = 1;
	return (i);
}

int	ft_printcharxandx(char type, va_list arg)
{
	unsigned int	x;

	if (type == 'x')
	{
		x = va_arg(arg, int);
		return (ft_lenghtputnbr(x, "0123456789abcdef"));
	}
	else
	{
		x = va_arg(arg, int);
		return (ft_lenghtputnbr(x, "0123456789ABCDEF"));
	}
}
