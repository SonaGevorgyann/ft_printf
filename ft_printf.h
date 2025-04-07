/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:48:05 by songevor          #+#    #+#             */
/*   Updated: 2024/02/23 17:48:09 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		print_str(char *s);
int		print_char(char c);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		print_unsignedint(unsigned int n);
int		print_int(int n);
void	print_lower16(unsigned int n);
int		base_16(unsigned int n, char ch);
void	print_upper16(unsigned int n);
void	ft_put_unsigned_nbr(unsigned int n);
void	print_pointer16(unsigned long long n);
int		pointer_len(unsigned long long n);
int		ft_printf(const char *str, ...);

#endif
