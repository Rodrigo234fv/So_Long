/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:25:46 by rode-alb          #+#    #+#             */
/*   Updated: 2022/12/12 17:01:36 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>


char		*ft_substr(char const *s, unsigned int start, size_t len);

size_t		ft_strlen2(const char *s);

char		*ft_strdup(const char *src);

void		*ft_calloc(size_t nitems, size_t size);

void		ft_bzero(void *s, size_t n);

#endif
