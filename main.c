/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:06:36 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/30 18:41:56 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_printf("%d", INT32_MIN);
	printf("\n%d\n", a);
	a = printf("%d", INT32_MIN);
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