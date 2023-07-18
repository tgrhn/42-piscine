/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:23:15 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/15 14:06:58 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	j;
	int	i;
	int	backup;

	i = 0;
	j = 0;
	backup = size;
	while ((size > 1) && (dest[i] == src[i]) != 0)
	{
		dest[i] = src[i];
		--size;
		++i;
	}
	if (backup != 0)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		++j;
	}
	return (j);
}
int main(void)
{
	char dest[] = "ozcan";
	char src[] = "oya";
	printf("%d %s",ft_strlcpy(dest,src,5),dest);
}
