/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:11:12 by rode-alb          #+#    #+#             */
/*   Updated: 2022/12/12 15:51:49 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen2(src) * sizeof(char) + 1);
	if (!dest)
	{
		return (0);
	}
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

/* #include <stdio.h>
#include<string.h>
int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
} */