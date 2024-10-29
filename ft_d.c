/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:54:56 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:45:48 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_d(int i, int *cnt)
{
	int	neg;

	neg = 1;
	if (i < 0)
	{
		neg = -1;
		write(1, "-", 1);
		*cnt += 1;
	}
	if (i == 0)
	{
		write(1, "0", 1);
		*cnt += 1;
	}
	if (i != 0)
	{
		if (i / 10 != 0)
			ft_d(i / 10 * neg, cnt);
		*cnt += 1;
		write(1, &(char){i % 10 * neg + '0'}, 1);
	}
}
