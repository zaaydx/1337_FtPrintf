/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:24:18 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/28 12:15:42 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printpercent(void);
int		ft_printcharc(va_list arg);
int		ft_printchars(va_list arg);
int		ft_printcharxandx(char type, va_list arg);
int		ft_printcharu(va_list arg);
int		ft_printf(const char *str, ...);
int		ft_printchariandd(va_list arg);
void	ft_putnbr(int n);
void	converter(unsigned long int number, char *str);
void	ft_putchar(char c);
int		sizeofnumber(long int number);
int		ft_printcharp(va_list arg);
int		lenghtofhex(unsigned long int number);
int		ft_lenghtputnbr(unsigned int nbr, char *base);

#endif
