/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:30:59 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/22 09:44:28 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*temp;
	int		i;
	int		sign;

	i = 0;
	sign = 0;
	if (n < 0)
		sign = 1;
	if ((temp = ft_calloc(12, sizeof(char))) == NULL)
		return (NULL);
	if (n == 0)
		temp[i++] = '0';
	while (n != 0)
	{
		temp[i++] = (n % 10) * (sign ? -1 : 1) + '0';
		n /= 10;
	}
	if (sign)
		temp[i++] = '-';
	temp[i] = '\0';
	return (ft_strrev(temp));
}
