/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:27:20 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/17 15:37:44 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
