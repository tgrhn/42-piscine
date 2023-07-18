/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:04:25 by tkarakad          #+#    #+#             */
/*   Updated: 2023/02/23 19:04:27 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
int	main(void)
{
	int	index;
	char	**strs;
	char	*sep;
	char	*res;
	int	size;
	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 15 + 1);
	strs[0] = "Hello";
	strs[1] = "evaluator,";
	strs[2] = "you are amazing";
	sep = " ";
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	free(res);
}*/
