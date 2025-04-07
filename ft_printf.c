/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:47:59 by songevor          #+#    #+#             */
/*   Updated: 2024/02/27 20:19:59 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_percent(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 's')
		len = print_str(va_arg(args, char *));
	else if (c == 'c')
		len = print_char(va_arg(args, int));
	else if (c == 'i' || c == 'd')
		len = print_int(va_arg(args, int));
	else if (c == '%')
		len = print_char('%');
	else if (c == 'u')
		len = print_unsignedint(va_arg(args, unsigned int));
	else if (c == 'p')
		len = pointer_len(va_arg(args, unsigned long long));
	else if (c == 'x' || c == 'X')
		len = base_16(va_arg(args, unsigned int), c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			len += check_percent(str[i + 1], args);
			i++;
		}
		else
		{
			print_char(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
