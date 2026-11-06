/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <soufianmghirat@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:52:23 by smghirat         #+#    #+#             */
/*   Updated: 2026/10/30 13:52:23 by smghirat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_arg(char spec, va_list *args)
{
	if (spec == 'c')
		return (ft_putchar((char)va_arg(*args, int)));
	if (spec == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (spec == 'p')
		return (ft_print_ptr(va_arg(*args, void *)));
	if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (spec == 'u')
		return (ft_putnbr_unsigned(va_arg(*args, unsigned int)));
	if (spec == 'x')
		return (ft_print_hex(va_arg(*args, unsigned int), 0));
	if (spec == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), 1));
	if (spec == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			count += print_arg(*(format + 1), &args);
			format += 2;
		}
		else
		{
			count += ft_putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}
