/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:18:09 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/11 17:17:14 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	converter(t_li n, t_li base_n, char *base)
{
	int	count;

	count = 0;
	if (n >= base_n)
	count = converter (n / base_n, base_n, base);
	write (1, &base[n % base_n], 1);
	return (count + 1);
}

#include <stdio.h>
int main ()
{
	printf("\n%i\n", converter(156, 16, "0123456789abcdef"));
} 