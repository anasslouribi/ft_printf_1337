/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:17:44 by alouribi          #+#    #+#             */
/*   Updated: 2024/01/04 13:30:31 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...);
int	ft_putchar(int c);
int ft_puthexa(unsigned int n, int *i, char c);
int ft_putnbr(int n, int *i);
int ft_putstr(char *ptr);
int ft_putunsign(unsigned int n, int *i);

#endif