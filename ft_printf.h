/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:50:25 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:50:27 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *s, ...);
void	ft_s(char *s, int *cnt);
void	ft_d(int i, int *cnt);
void	ft_p(size_t p, int *cnt);
void	ft_x(unsigned int i, char x, int *cnt);
void	ft_u(unsigned int i, int *cnt);
void	ft_c(char c, int *cnt);

#endif
