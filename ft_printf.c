/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:28:34 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/12/09 13:18:41 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

static int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}

static int	ft_putnbr(long long nb)
{
	unsigned long long	n;
	int					count;

	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = -nb;
		count++;
	}
	else
		n = nb;
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
	}
	n = n % 10 + 48;
	count += write(1, &n, 1);
	return (count);
}

static int	ft_puthex(unsigned long nb, int uplow, int p)
{
	char	*base;
	int		count;

	count = 0;
	while (p > 0)
	{
		count += write(1, "0x", 2);
		p--;
	}
	if (uplow)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb > 15)
		count += ft_puthex(nb / 16, uplow, p);
	count += write(1, &base[nb % 16], 1);
	return (count);
}

static int	ft_vargs(char c, va_list args)
{
	int	size;

	size = 0;
	if (c == 'c')
	{
		c = va_arg(args, int);
		size += write (1, &c, 1);
	}
	else if (c == 's')
		size += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		size += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		size += ft_putnbr(va_arg(args, unsigned int));
	else if (c == 'p')
		size += ft_puthex(va_arg(args, unsigned long), 0, 1);
	else if (c == 'x')
		size += ft_puthex(va_arg(args, unsigned int), 0, 0);
	else if (c == 'X')
		size += ft_puthex(va_arg(args, unsigned int), 1, 0);
	else if (c == '%')
		size += write(1, "%", 1);
	return (size);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		size;
	int		i;

	va_start(args, format);
	if (!format)
		return (0);
	size = 0;
	i = 0;
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
