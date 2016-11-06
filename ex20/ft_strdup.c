/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:34:12 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/05 15:46:24 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*dup;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if ((dup = (char*)malloc(sizeof(*dup) * (l + 1))) == 0)
		return (0);
	while (i < l)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
