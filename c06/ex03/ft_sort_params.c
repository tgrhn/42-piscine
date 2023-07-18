/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:07:45 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/21 17:04:52 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	char	i;
	char	j;
	char	*temp;

	i = 49;
	while (i < ac + 48)
	{
		j = 49;
		while (j < ac + 48)
		{
			if (ft_strcmp(av[i - 48], av[j - 48]) < 0)
			{
				temp = av[i - 48];
				av[i - 48] = av[j - 48];
				av[j - 48] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(av);
}
