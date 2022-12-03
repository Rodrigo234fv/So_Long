/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:10:44 by rode-alb          #+#    #+#             */
/*   Updated: 2022/12/01 01:52:30 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define DEC "0123456789"
# define HEXL "0123456789abcdef"
# define HEXU "0123456789ABCDEF"

typedef unsigned long long	t_li;

int		ft_printf(const char *s, ...);

int		converter(t_li n, t_li base_n, char *base);

int		ft_print_ap(va_list ap, const char a);

int		ft_printchar(int c);

int		ft_printstr(char *str);

int		ft_print_ptr(t_li n);

int		ft_print_unsigned(unsigned int n);

int		ft_printnbr(int n);

int		ft_printhexl(unsigned int n);

int		ft_printhexu(unsigned int n);

#endif
