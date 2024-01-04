/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 08:50:19 by alouribi          #+#    #+#             */
/*   Updated: 2024/01/04 14:26:59 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	va_list args;
	int i;
	int l;

	i = 0;
	l = 0;
	va_start(args, str);
	while(str[i] != '\0')
	{
		if(str[i] == '%')
		{
			i++;
			if(str[i] == 'c')
				l += ft_putchar(va_arg(args, int));
			if(str[i] == 's')
				l += ft_putstr(va_arg(args, char *));
			// if(str[i] == 'p')
			// 	l += ft_putvoid(va_arg(args, void *));
			if(str[i] == 'd' || str[i] == 'i')
				l += ft_putnbr(va_arg(args, int), &l);
			if(str[i] == 'u')
				l += ft_putunsign(va_arg(args, unsigned int), &l);
			if(str[i] == 'x' || str[i] == 'X')
				l += ft_puthexa(va_arg(args, unsigned int), &l, str[i]);
			if(str[i] == '%')
				l += ft_putchar('%');
			if(str[i + 1] == '\0')
				break ;
			i++;
		}
		l += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (l);
}
int main()
{
	// printf("%d\n", ft_printf("hello my name is %s and my age is %c", "anass", 97));
	// int i = printf("hello my name is %s and my age is %c", "anass", 97);

	// printf("%d", i);
}