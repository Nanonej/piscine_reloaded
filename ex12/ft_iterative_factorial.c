/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:41:33 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/04 11:57:51 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else
	{
		while (nb != 1)
		{
			nb--;
			fact = fact * nb;
		}
	}
	return (fact);
}
