/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:27:31 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/29 16:06:21 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_recursive_hex(int n, int fd, char *base)
{
	unsigned long long	remainder;
	unsigned long long	base_size;

	if (n == 0)
		return ;
	base_size = ft_strlen(base);
	ft_recursive_hex(n / base_size, fd, base);
	remainder = (n % base_size);
	write(fd, &base[remainder], 1);
}

void	ft_putbase_fd(unsigned long n, int fd, char *base)
{
	if (!n)
		return ;
	else
		ft_recursive_hex(n, fd, base);
}
