/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcharu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:17:28 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/27 22:01:18 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sizeofnumber(long int number)
{
	int	i;

	i = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

void	ft_longputnbr(unsigned int i)
{
	if (i <= 9)
		ft_putchar(i + 48);
	else
	{
		ft_longputnbr(i / 10);
		ft_longputnbr(i % 10);
	}
}

int	ft_printcharu(va_list arg)
{
	unsigned int	nb;
	int				size;

	nb = va_arg(arg, unsigned int);
	ft_longputnbr(nb);
	size = sizeofnumber(nb);
	return (size);
}
