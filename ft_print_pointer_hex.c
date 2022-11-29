/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:01:46 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/29 16:08:32 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_print_pointer_hex(va_list args)
{
	unsigned long long	number;

	number = (unsigned long long)va_arg(args, void **);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	ft_putbase_fd(number, 1, "123456789abcdef");
	return (14);
}
