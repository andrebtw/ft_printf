/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:27:58 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/28 17:21:18 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H

# define FT_HEADER_H
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

// LIBFT //
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(char *string);

// MAIN FUNCTION //
int		ft_printf(const char *s, ...);

// EACH DIFFERENT CASE //
int		ft_print_char(va_list args);
int		ft_print_string(va_list args);

#endif