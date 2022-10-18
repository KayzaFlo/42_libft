/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:23:35 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/18 17:29:17 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*alloc;
	unsigned char	*alloc_byte;
	size_t			i;

	alloc = malloc(count * size);
	alloc_byte = alloc;
	i = -1;
	while (++i < count * size)
		alloc_byte[i] = 0;
	return (alloc_byte);
}
