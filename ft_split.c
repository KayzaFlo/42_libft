/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:06:17 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/19 11:52:03 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_wc(const char *str, char sep)
{
	int	onword;
	int	i;
	int	wc;

	onword = 1;
	if (*str == sep)
		onword = 0;
	i = 0;
	wc = 1;
	while (str[++i])
	{
		if (str[i] == sep && onword == 1)
		{
			wc++;
			onword = 0;
		}
		if (str[i] != sep && onword == 0)
			onword = 1;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		shift;
	int		len;

	tab = malloc((get_wc(s, c) + 1) * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	shift = 0;
	len = 0;
	while (s[len + shift])
	{
		while (s[shift + len] == c)
			shift++;
		while (s[shift + len] != c && s[shift + len] != '\0')
			len++;
		*tab = malloc((len + 1) * sizeof(char));
		if (*tab == NULL)
			return (NULL);
		ft_strlcat(*tab, s + shift, len + 1);
		tab++;
		shift += len;
		len = 0;
	}
	*tab = NULL;
	return (tab - get_wc(s, c));
}
