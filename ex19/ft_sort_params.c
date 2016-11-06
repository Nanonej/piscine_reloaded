/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:23:49 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/05 21:51:30 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		swap;

	swap = 1;
	while (swap)
	{
		i = 0;
		swap = 0;
		while (++i < argc - 1)
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				swap = 1;
			}
	}
	i = 0;
	while (argv[++i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
