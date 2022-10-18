/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:51:41 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/17 15:37:38 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	shift;

	shift = ft_strlen(dest);
	if (shift >= size)
	{
		return (size + ft_strlen(src));
	}
	i = 0;
	while (src[i] != '\0' && shift + i < size - 1)
	{
		dest[shift + i] = src[i];
		i++;
	}
	dest[shift + i] = '\0';
	return (shift + ft_strlen(src));
}
