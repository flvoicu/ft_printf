/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:55:57 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:47:16 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_x(unsigned int i, char x, int	*cnt)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (x == 'x')
		hex = "0123456789abcdef";
	if (i == 0)
	{
		write (1, &hex[i % 16], 1);
		*cnt += 1;
	}
	if (i)
	{
		if (i / 16 != 0)
			ft_x(i / 16, x, cnt);
		*cnt += 1;
		write(1, &hex[i % 16], 1);
	}
}
