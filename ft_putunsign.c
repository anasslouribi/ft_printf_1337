/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:17:04 by alouribi          #+#    #+#             */
/*   Updated: 2024/01/04 14:15:12 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsign(unsigned int n, int *i)
{
	if(n > 9)
	{
		ft_putunsign(n / 10, i);
		ft_putunsign(n % 10, i);
	}
	if(n <= 9)
	{
		n += 48;
		write(1, &n, 1);
		(*i)++;
	}
	return (*i);
}