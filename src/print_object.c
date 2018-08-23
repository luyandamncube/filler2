/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_object.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <lmncube@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:44:23 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 12:20:53 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	print_object(t_m *object)
{
	int k;

	k = 0;
	while (k < object->x)
	{
		ft_putstr(object->grid[k]);
		ft_putstr("\n");
		k++;
	}
}
