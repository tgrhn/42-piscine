/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:43:50 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/15 13:25:36 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_str_lowcase(char ch)
{
	if (ch > 96 && ch < 123)
	{
		ch = ch - 32;
	}
	return (ch);
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] = str[0] - 32;
	}
	while (str[++n] != '\0')
	{
		if (!((str[n - 1] > 64 && str[n - 1] < 91) || (str[n - 1] > 96
					&& str[n - 1] < 123)
				|| (str[n - 1] > 47 && str[n - 1] < 58)))
		{
			str[n] = ft_str_lowcase(str[n]);
		}
		else if ((str[n - 1] > 64 && str[n - 1] < 91)
			|| (str[n - 1] > 96 && str[n - 1] < 123))
		{
			if (str[n] > 64 && str[n] < 91)
			{
				str[n] = str[n] + 32;
			}
		}
	}
	return (str);
}
