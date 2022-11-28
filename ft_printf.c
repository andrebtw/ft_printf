/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:57:45 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/28 16:56:01 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_printf_char_check(const char *s, int i, va_list args)
{
	if (s[i] == '%')
	{
		if (s[i + 1] == 'c')
			return(ft_print_char(args));
	}
	else
		ft_putchar_fd(s[i], 1);
	return (0);
}

int ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		return_size;
	int		size_string;

	i = 0;
	return_size = 0;
	va_start(args, s);
	while (s[i])
	{
		size_string = ft_printf_char_check(s, i, args);
		if (size_string)
			i++;
		else
			return_size++;
		return_size = return_size + size_string;
		i++;
	}
	va_end(args);
	return (return_size);
}
