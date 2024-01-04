/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:41:51 by alouribi          #+#    #+#             */
/*   Updated: 2024/01/04 13:32:04 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexa(unsigned int n, int *i, char c)
{
    if(n > 15)
    {
        ft_puthexa(n/16, i, c);
        ft_puthexa(n%16, i, c);
    }
    if(n <= 9)
    {
        n += 48;
        write(1, &n, 1);
        (*i)++;
    }
    if(n > 9 && n < 16 && c == 'X')
    {
      n += 55;
      write(1, &n, 1);
      (*i)++;
    }
	if(n > 9 && n < 16 && c == 'x')
    {
      n += 87;
      write(1, &n, 1);
      (*i)++;
    }
    return (*i);
}
