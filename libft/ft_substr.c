/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:59:50 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/07 16:44:20 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		size;

	i = 0;
	size = ft_strlen(s);
	if (start >= size || !len)
		return (ft_strdup(""));
	if ((len + start) < size)
		size = len;
	else
		size = size - start;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	s = s + start;
	while (s[i] && size--)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/* #include <stdio.h>
 #include <string.h>
int main()
{
	char str[] =  "";
	printf("%s", ft_substr( str, 5, 0));
}  */