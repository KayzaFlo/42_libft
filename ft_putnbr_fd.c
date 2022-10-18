/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:01:08 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/17 15:58:54 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar('-', fd);
		if (nb <= -10)
			ft_putnbr(-(nb / 10), fd);
		ft_putchar((10 - (nb % 10)) % 10 + 48, fd);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10, fd);
		ft_putchar(nb % 10 + 48, fd);
	}
}
