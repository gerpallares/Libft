/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:57:22 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/21 11:46:47 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_token_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (!s)
	{
		if (*s != c)
		{
			++i;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	matrix = malloc(sizeof(char *) * (ft_token_len(s, c) + 1));
	if (!matrix)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			matrix[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	matrix[i] = 0;
	return (matrix);
}
