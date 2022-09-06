/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:56:38 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/05 14:23:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *args, int nbr)
{
	char	*ptr;

	ptr = (char *)args;
	if (nbr > 255)
		return (ptr);
	while (*ptr && *ptr != nbr)
		ptr++;
	if (*ptr == nbr)
		return (ptr);
	return (NULL);
}
