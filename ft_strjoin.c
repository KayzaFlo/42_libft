/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:50:40 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/18 10:27:22 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	get_lenght(int size, char **strs, char *sep)
{
	int	lenght;
	int	i;

	lenght = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		i++;
	}
	return (lenght);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	/*if (size == 0)
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		*str = '\0';
		return (str);
	}
	str = malloc(get_lenght(size, strs, sep) * sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strlcat(str, strs[i], ft_strlen(strs[i]));
		if (i < size - 1)
			ft_strlcat(str, sep, ft_strlen(sep));
		i++;
	}*/
	return (str);
}
