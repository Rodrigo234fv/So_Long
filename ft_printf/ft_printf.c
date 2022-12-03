/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:13:06 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/11 14:56:39 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Falta Variadic function para a parte do %
So assim da para fzr o printf */

int	ft_printf(const char *s, ...)
{
	int		i;
	int		print;
	va_list	ap;

	i = 0;
	print = 0;
	va_start (ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			print += ft_print_ap(ap, s[i + 1]);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			print++;
		}
		i++;
	}
	va_end (ap);
	return (print);
}

/* #include <stdio.h>
int main ()
{
	char c = 'B';
	ft_printf("%p", c);
} */