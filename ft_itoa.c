/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:54:50 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/18 13:15:35 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(int n)
{
	int	mag;

	mag = 0;
	while (n > 9 || n < -9)
	{
		mag++;
		n /= 10;
	}
	if (n < 0)
		return (mag + 2);
	return (mag + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = get_len(n);
	str = malloc(len * sizeof(char));
	if (str == 0)
		return (0);
	if (n < 0)
		str[0] = '-';
	i = len - 1;
	while (n > 9 || n < -9)
	{
		if (n < 0)
			str[i] = -(n % 10) + '0';
		else
			str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (n < 0)
		str[i] = -(n % 10) + '0';
	else
		str[i] = n % 10 + '0';
	return (str);
}
