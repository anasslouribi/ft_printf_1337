/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:12:30 by alouribi          #+#    #+#             */
/*   Updated: 2024/01/04 13:32:20 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n, int *i)
{
	unsigned int	nb;
	
	nb = n;
	if(n < 0)
	{
		write(1, "-", 1);
		nb = n * -1;
		(*i)++;
	}
	if(nb > 9)
	{
		ft_putnbr(nb/10, i);
		ft_putnbr(nb%10, i);
	}
	if(nb <= 9)
	{
		nb += 48;
		write(1, &nb, 1);
		(*i)++;
	}
	return (*i);
}