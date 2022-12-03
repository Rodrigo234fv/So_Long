/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:53:58 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/09 19:14:39 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count = write(1, "-", 1);
		return (count + converter(((long long) n * (long long)-1), 10, DEC));
	}
	return (count + converter(n, 10, DEC));
}
