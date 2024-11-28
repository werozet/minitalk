/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:40:44 by wzielins          #+#    #+#             */
/*   Updated: 2024/04/19 17:21:16 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_printf(const char *str, ...);
int				ft_printnbr(long long int num);
int				ft_print_unsigned(unsigned int n);
int				ft_printstr(char *str);
int				ft_printchar(int c);
int				ft_print_point(void *ptr);
int				ft_printpercent(void);
int				ft_print_unsigned(unsigned int n);
int				ft_print_hex(unsigned long long n, char format);

void			ft_putstr(char *str);
void			ft_putchar(char c, int fd);

#endif
