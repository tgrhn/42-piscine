/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:41:48 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/15 13:15:39 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
