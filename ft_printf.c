/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:57:45 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/25 15:41:21 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_args(const char *s)
{
	int	i;
	int	nb_args;

	i = 0;
	nb_args = 0;
	while (s[i])
	{
		if (s[i] == '%')
			nb_args++;
		if (s[i] == '%' && s[i + 1] == '%')
			nb_args++;
		i++;
	}
	return (nb_args);
}

int ft_printf(const char *s, ...)
{
	va_list	args;
	int		nb_args;
	int		nb;

	nb_args = ft_count_args(s);
	ft_putnbr_fd(nb_args, 1);
	va_start(args, s);
	if (ft_check_errors())
		return (0);
	ft_putstr_fd((char *)s, 1);
	while (nb_args > 0)
	{
		nb = va_arg(args, int);
		ft_putnbr_fd(nb, 1);
		nb_args--;
	}
	va_end(args);
	return (0);
}
