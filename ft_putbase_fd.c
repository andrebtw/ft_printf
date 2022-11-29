/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:27:31 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/29 19:03:47 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_recursive_hex(int n, int fd, char *base, int size)
{
	unsigned long long	remainder;
	unsigned long long	base_size;

	if (n == 0)
		return ;
	base_size = ft_strlen(base);
	size++;
	ft_recursive_hex(n / base_size, fd, base, size);
	remainder = (n % base_size);
	write(fd, &base[remainder], 1);
}

int	ft_putbase_fd(unsigned long n, int fd, char *base)
{
	int	size;

	size = 0;
	if (!n)
	{
		write(1, "0", 1);
		size = 1;
	}
	else
		ft_recursive_hex(n, fd, base, size);
	return (size);
}
