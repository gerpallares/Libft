/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:14:11 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/22 11:48:15 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	temp = malloc(len + 1);
	if (temp == NULL)
		return (0);
	while (len--)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	temp[i] = '\0';
	return ((char *)temp);
}
