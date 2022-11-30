/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimals.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:21:12 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/30 18:35:47 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimals(va_list args)
{
	int	number;

	number = va_arg(args, int);
	ft_putnbr_fd(number, 1);
	return (ft_sizeof_nb_base_int(number, "0123456789"));
}
