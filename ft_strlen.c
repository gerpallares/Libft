/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:12 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/26 14:42:56 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *str = "hola";
	int	result;

	result = ft_strlen(str);
	printf("%d\n", result);
	return (0);
}*/
