/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:01:46 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/30 18:13:38 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_of_hex(unsigned long number, char *base)
{
	int	size;

	size = 0;
	if (!number)
		return (1);
	while (number != 0)
	{
		number = number / ft_strlen(base);
		size++;
	}
	return (size);
}

int	ft_print_pointer_hex(va_list args)
{
	unsigned long long	number;

	number = (unsigned long long)va_arg(args, void *);
	write(1, "0x", 2);
	ft_putbase_fd(number, 1, "0123456789abcdef");
	return (ft_size_of_hex(number, "0123456789abcdef") + 2);
}
