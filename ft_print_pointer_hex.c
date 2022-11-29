/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:01:46 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/29 19:03:20 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer_hex(va_list args)
{
	unsigned long long	number;
	int					size;

	number = (unsigned long long)va_arg(args, void *);
	write(1, "0x", 2);
	size = ft_putbase_fd(number, 1, "0123456789abcdef");
	return (size);
}
