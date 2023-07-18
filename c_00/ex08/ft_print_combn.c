/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:46:12 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/23 15:25:00 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putcomma(int x, int n, int control)
{
	if (control == n)
	{
		if (x != 58 - n)
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_display(long i, int n, int control)
{
	int	ch[10];
	int	digit;
	int	remainder;
	int	digitcopy;
	int	nb;

	nb = i;
	digitcopy = 0;
	digit = n;
	while (i > 0)
	{
	remainder = i % 10;
	i = i / 10;
	ch[n - 1] = remainder + '0';
	n--;
	}
	while (digitcopy < digit)
	{
		write(1, &ch[digitcopy], 1);
	digitcopy++;
	}
	ft_putcomma(ch[0], digit, control);
}

void	ft_find2(long nb, int n, int control)
{
	int	copy;
	int	copy2;
	int	kalan;
	int	remainder;

	kalan = 10;
	copy = nb;
	copy2 = nb;
	while (copy2 > 0)
	{
	remainder = copy2 % 10;
	copy2 = copy2 / 10;
		if (kalan <= remainder)
		{
			copy = 0;
		}
		kalan = remainder;
	}
	if (copy == nb)
	{
		write (1, "0", 1);
		ft_display(nb, n, control);
		write (1, ", ", 2);
	}
}

void	ft_find(long nb, int n, int control)
{
	int	copy;
	int	copy2;
	int	kalan;
	int	remainder;

	kalan = 10;
	copy = nb;
	copy2 = nb;
	while (copy2 > 0)
	{
	remainder = copy2 % 10;
	copy2 = copy2 / 10;
		if (kalan <= remainder)
		{
			copy = 0;
		}
		kalan = remainder;
	}
	if (copy == nb)
	{
		ft_display(nb, n, control);
	}
}

void	ft_print_combn(int n)
{
	int	x;
	int	nb;
	int	t;

		x = 1;
		t = n;
	while (t > 0)
	{
		x *= 10;
		t--;
	}
	nb = x / 100 - 1;
	while (++nb < x)
	{
		if (nb < x / 10)
		{
			ft_find2(nb, n - 1, n);
		}
		else if (nb >= x / 10)
		{
			ft_find(nb, n, n);
		}
	}
}
