/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:08:39 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/18 10:09:23 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char unsigned	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char unsigned	*ptr;
	int				i;

	i = 0;
	ptr = ft_calloc(5, sizeof(char));
	while (i < 5)
	{
		printf("%c", ptr[i]);
		i++;
	}
	return (0);
}*/
