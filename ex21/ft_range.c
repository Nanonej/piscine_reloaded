/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:25:58 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/05 21:45:14 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *frch;

	i = 0;
	if (min >= max)
		return (NULL);
	if ((frch = (int*)malloc(sizeof(*frch) * (max - min))) == 0)
		return (0);
	while (min < max)
	{
		frch[i] = min;
		i++;
		min++;
	}
	return (frch);
}
