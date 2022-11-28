/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:27:58 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/28 16:55:36 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H

# define FT_HEADER_H
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
void	ft_putnbr_fd(int n, int fd);
int		ft_check_errors(void);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_print_char(va_list args);

#endif