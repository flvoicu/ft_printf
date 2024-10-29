/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:58:41 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/24 18:05:15 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check(char *c, va_list *args, int *cnt)
{
	if (*c == '%')
	{
		write(1, c, 1);
		*cnt += 1;
	}
	else if (*c == 'c')
		ft_c(va_arg(*args, int), cnt);
	else if (*c == 's')
		ft_s(va_arg(*args, char *), cnt);
	else if (*c == 'p')
	{
		write(1, "0x", 2);
		*cnt += 2;
		ft_p(va_arg(*args, size_t), cnt);
	}
	else if (*c == 'd' || *c == 'i')
		ft_d(va_arg(*args, int), cnt);
	else if (*c == 'u')
		ft_u(va_arg(*args, unsigned int), cnt);
	else if (*c == 'x' || *c == 'X')
		ft_x(va_arg(*args, unsigned int), *c, cnt);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	char	*p;
	int		cnt;

	p = (char *)s;
	cnt = 0;
	va_start (args, s);
	while (*p)
	{
		if (*p != '%')
		{
			write(1, p, 1);
			cnt++;
		}
		else
		{
			p++;
			if (*p != '\0')
				check (p, &args, &cnt);
		}
		if (*p != '\0')
			p++;
	}
	va_end(args);
	return (cnt);
}
