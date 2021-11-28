/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:36:58 by bguyot            #+#    #+#             */
/*   Updated: 2021/11/28 09:46:14 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char *str, char *charset);
int		ft_wordlen(char *str, char *charset);
int		ft_wordcount(char *str, char *charset);
char	*ft_wordcpy(char *src, int n);

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		size;
	int		i;
	int		n;

	size = ft_wordcount(str, charset);
	res = malloc((size + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		n = ft_wordlen(str, charset);
		res[i] = ft_wordcpy(str, n);
		if (res[i] == NULL)
			return (NULL);
		str += n;
	}
	res[size] = 0;
	return (res);
}

int	ft_is_separator(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_separator(str + i, charset))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			count++;
	}
	return (count);
}

char	*ft_wordcpy(char *src, int n)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}
