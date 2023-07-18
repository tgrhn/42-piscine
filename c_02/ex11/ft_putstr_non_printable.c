/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:25:30 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/15 13:37:44 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_hexa(int y)
{
	if (y == 10)
	{
		write (1, "a", 1);
	}
	if (y == 11)
	{
		write (1, "b", 1);
	}
	if (y == 12)
	{
		write (1, "c", 1);
	}
	if (y == 13)
	{
		write (1, "c", 1);
	}
	if (y == 14)
	{
		write (1, "d", 1);
	}
	if (y == 15)
	{
		write (1, "e", 1);
	}
}

void	ft_hexa_converter(char ch)
{	
	int	x;
	int	y;

	x = ch / 16 + 48;
	y = ch % 16 + 48;
	write (1, "\\ ", 1);
	write (1, &x, 1);
	if (y < 58)
	{
		write(1, &y, 1);
	}
	if (y >= 58)
	{
		ft_hexa(y - 48);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_hexa_converter(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
	i++;
	}
}
