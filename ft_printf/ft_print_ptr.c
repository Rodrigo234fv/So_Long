/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:15 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/11 13:03:53 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 0x

#include "ft_printf.h"

int	ft_print_ptr(t_li n)
{
	int	count;

	if (!n)
		return (write(1, "(nil)", 5));
	count = write (1, "0x", 2);
	count += converter(n, 16, HEXL);
	return (count);
}
