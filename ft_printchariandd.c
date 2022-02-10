/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchariandd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:17:45 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/27 21:51:18 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
	{	
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
}

int	ft_printchariandd(va_list arg)
{
	int	nb;
	int	size;

	size = 0;
	nb = va_arg(arg, int);
	if (nb < 0)
	{
		size = size + sizeofnumber(-nb);
		size++;
	}
	else
		size = sizeofnumber(nb);
	ft_putnbr(nb);
	return (size);
}
