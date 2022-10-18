/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:49:55 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/18 17:21:31 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_byte;
	size_t			i;

	dst_byte = dst;
	i = -1;
	while (++i < len)
	{
		if (dst_byte + i < (unsigned char *)src)
			dst_byte[i] = *((unsigned char *)src + i);
		else if (dst_byte + i > (unsigned char *)src + len)
			dst_byte[i] = *((unsigned char *)src + i);
	}
	return (dst);
}
