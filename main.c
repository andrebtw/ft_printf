/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:06:36 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/29 19:05:03 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	char b[20] = "HEL";

	a = ft_printf("%p", (void *)1848400);
	printf("\n%d\n", a);
	a = printf("%p", (void *)1848400);
	printf("\n%d\n", a);
	return (0);
}

/*
int	main()
{
	char b[32] = "hello world";
	ft_putbase_fd((unsigned long)b, 1, "0123456789abcdef");
	return 0;
}*/