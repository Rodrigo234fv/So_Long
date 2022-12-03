/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:52:17 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/09 19:25:56 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %u

int	ft_print_unsigned(unsigned int n)
{
	if (n >= 0)
		return (converter(n, 10, DEC));
	return (0);
}
