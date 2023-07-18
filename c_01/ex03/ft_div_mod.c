/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:06:59 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/10 12:22:32 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_result;
	int	mod_result;

	div_result = a / b;
	mod_result = a % b;
	*div = div_result;
	*mod = mod_result;
}
