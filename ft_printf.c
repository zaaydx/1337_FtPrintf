/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:26:38 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/27 22:58:14 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	setconversion(const char *arg, int i)
{
	if (arg[i + 1] == 'c')
		return ('c');
	else if (arg[i + 1] == 's')
		return ('s');
	else if (arg[i + 1] == 'p')
		return ('p');
	else if (arg[i + 1] == 'd')
		return ('d');
	else if (arg[i + 1] == 'i')
		return ('i');
	else if (arg[i + 1] == 'u')
		return ('u');
	else if (arg[i + 1] == 'x')
		return ('x');
	else if (arg[i + 1] == 'X')
		return ('X');
	else if (arg[i + 1] == '%')
		return ('%');
	return (0);
}

int	putconversion(char arg, va_list	list)
{
	if (arg == 'c')
		return (ft_printcharc(list));
	else if (arg == 's')
		return (ft_printchars(list));
	else if (arg == 'p')
		return (ft_printcharp(list));
	else if (arg == 'd')
		return (ft_printchariandd(list));
	else if (arg == 'i')
		return (ft_printchariandd(list));
	else if (arg == 'u')
		return (ft_printcharu(list));
	else if (arg == 'x')
		return (ft_printcharxandx(arg, list));
	else if (arg == 'X')
		return (ft_printcharxandx(arg, list));
	else if (arg == '%')
		return (ft_printpercent());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;
	int		count2;
	char	type;

	count = 0;
	count2 = 0;
	va_start(arg, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			type = setconversion(str, count);
			count2 += putconversion(type, arg);
			count += 2;
		}
		else
		{
			ft_putchar(str[count]);
			count++;
			count2++;
		}
	}
	va_end(arg);
	return (count2);
}
