/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:18:40 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/17 15:37:48 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

int	set_state(char c, int state)
{
	if (is_whitespace(c) == 1 && state <= 0)
		return (0);
	else if ((c == '+' || c == '-') && state <= 1)
		return (1);
	else if (c >= '0' && c <= '9' && state <= 2)
		return (2);
	else
		return (3);
}

int	ft_atoi(char *str)
{
	int	i;
	int	state;
	int	nbr;
	int	mult;

	i = 0;
	state = 0;
	nbr = 0;
	mult = 1;
	while (str[i] != '\0')
	{
		state = set_state(str[i], state);
		if (str[i] == '-' && state == 1)
			mult *= -1;
		else if (state == 2)
			nbr = nbr * 10 + str[i] - 48;
		else if (state == 3)
			return (nbr * mult);
		i++;
	}
	return (nbr * mult);
}
