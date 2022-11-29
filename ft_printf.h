/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:27:58 by anrodri2          #+#    #+#             */
/*   Updated: 2022/11/29 19:03:03 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

// ERROR CODES //
# define EMPTY_V -1
# define NULL_V -2
# define WRITE_ERROR -3

// LIBFT //
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(char *string);

// MAIN FUNCTIONS //
int		ft_printf(const char *s, ...);
int		ft_null_found(void);

// EACH DIFFERENT CASE //
int		ft_print_char(va_list args);
int		ft_print_string(va_list args);
int		ft_print_pointer_hex(va_list args);
int		ft_putbase_fd(unsigned long n, int fd, char *base);
int		ft_print_pourcentage(void);

#endif