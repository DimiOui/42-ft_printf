/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:28:34 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/12/08 14:41:00 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vargs(char c, va_list args)
{
	int	size;

	size = 0;
	if (c == 'c')
		size += ft_putchar(va_arg(args, int));
	if (c == 's')
		size += ft_putstr(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		size += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		size += ft_put_unbr(va_arg(args, unsigned int));
	if (c == 'p')
		size += ft_putaddr(va_arg(args, unsigned long long int));
	if (c == 'x')
		size += ft_puthex(va_arg(args, unsigned int) 0));
	if (c == 'X')
		size += ft_puthex(va_arg(args, unsigned int) 1));
	if (c == '%')
		size += write(1, "%", 1);
	return (size);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		size;
	int		i;

	size = 0;
	i = 0;
	va_start(args, format);
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
			size += ft_vargs(format[++i], args);
		else
			size += write (1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (size);
}
