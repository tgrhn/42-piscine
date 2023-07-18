/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:18:46 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/10 12:25:10 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	inverted;
	int	temp;

	i = 0;
	inverted = size - 1;
	while (i < inverted)
	{
		temp = tab[i];
		tab[i] = tab[inverted];
		tab[inverted] = temp;
		inverted--;
		i++;
	}
}
