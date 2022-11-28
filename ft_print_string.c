/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:09:34 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/28 17:21:30 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_print_string(va_list args)
{
	char	*print_s;

	print_s = va_arg(args, char *);
	ft_putstr_fd(print_s, 1);
	return (ft_strlen(print_s));
}
