/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:18:04 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 12:22:19 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	place_piece(int x, int y, t_m *piece, t_m *board)
{
	int	k[4];

	k[0] = 0;
	k[2] = x;
	while (k[0] < piece->x)
	{
		k[1] = 0;
		k[3] = y;
		while (k[1] < piece->y)
		{
			if (piece->grid[k[0]][k[1]] == '*')
				board->grid[k[2]][k[3]] = board->token;
			k[1]++;
			k[3]++;
		}
		k[0]++;
		k[2]++;
	}
}
