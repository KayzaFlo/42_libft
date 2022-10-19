/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:08:17 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/19 11:50:13 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_byte;
	size_t				i;

	s_byte = s;
	i = 0;
	while (i < n)
	{
		if (s_byte[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
