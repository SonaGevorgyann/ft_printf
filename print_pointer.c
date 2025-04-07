/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:53:11 by songevor          #+#    #+#             */
/*   Updated: 2024/02/26 18:53:14 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_point16(unsigned long long n)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		print_point16(n / 16);
		ft_putchar(str[n % 16]);
	}
	else
		ft_putchar(str[n]);
}

void	print_pointer16(unsigned long long n)
{
	char	*str;

	ft_putstr("0x");
	str = "0123456789abcdef";
	if (n >= 16)
	{
		print_point16(n / 16);
		ft_putchar(str[n % 16]);
	}
	else
		ft_putchar(str[n]);
}

int	pointer_len(unsigned long long n)
{
	int	len;

	len = 0;
	print_pointer16(n);
	if (n == 0)
		return (3);
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len + 2);
}
