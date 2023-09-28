/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:57:22 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/28 12:51:56 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_token_length(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
			{
				++s;
			}
		}
		else
			++s;
	}
	return (ret);
}

static char	**free_matrix(char **matrix, int i)
{
	while (i >= 0)
	{
		free(matrix[i]);
		i--;
	}
	free(matrix);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	matrix = (char **)malloc(sizeof(char *) * (ft_token_length(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			matrix[i++] = ft_substr(s - len, 0, len);
			if (!matrix[i])
				return (free_matrix(matrix, i));
		}
		++s;
	}
	matrix[i] = 0;
	return (matrix);
}

int main(void)
{
	char	*str;
	char	word;
	char	*result;
	int		i;

	str = "holaloco";
	word = 'l';
	i = 0;
	result = *ft_split(str, word);
	while (!i)
	{
		printf("result is: %s\n", result);
		i++;
	}
	return (0);
}
