/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:49:04 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/14 18:32:11 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	free(s1);
	while (s2[k])
	{
		str[i++] = s2[k];
		if (s2[k++] == '\n')
			break ;
	}
	str[i] = '\0';
	return (str);
}

char	*clear_error(char *buffer, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		while (buffer[i++])
			buffer[i] = 0;
	}
	return (NULL);
}
