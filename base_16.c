/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_16.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:12:38 by songevor          #+#    #+#             */
/*   Updated: 2024/02/23 21:12:40 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_lower16(unsigned int n)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		print_lower16(n / 16);
		ft_putchar(str[n % 16]);
	}
	else
		ft_putchar(str[n]);
}

int	base_16(unsigned int n, char ch)
{
	int	len;

	len = 0;
	if (ch == 'x')
		print_lower16(n);
	else
		print_upper16(n);
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

void	print_upper16(unsigned int n)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (n >= 16)
	{
		print_upper16(n / 16);
		ft_putchar(str[n % 16]);
	}
	else
		ft_putchar(str[n]);
}
