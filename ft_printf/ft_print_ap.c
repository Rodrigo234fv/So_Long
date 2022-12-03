/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:48:40 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/09 19:00:12 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ap(va_list ap, const char a)
{
	if (a == 'c')
		return (ft_printchar(va_arg(ap, int)));
	else if (a == 's')
		return (ft_printstr(va_arg(ap, char *)));
	else if (a == 'p')
		return (ft_print_ptr(va_arg(ap, unsigned long long )));
	else if (a == 'u')
		return (ft_print_unsigned(va_arg(ap, unsigned int)));
	else if (a == 'd' || a == 'i')
		return (ft_printnbr(va_arg(ap, int)));
	else if (a == 'x')
		return (ft_printhexl(va_arg(ap, unsigned int)));
	else if (a == 'X')
		return (ft_printhexu(va_arg(ap, unsigned int)));
	else
		return (ft_printstr("%"));
}
