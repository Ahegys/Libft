/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:05:39 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 03:29:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*cpy;
	size_t	lent;
	size_t	index;

	cpy = (char *)big;
	lent = ft_strlen(little);
	index = 0;
	if (!*little)
		return (cpy);
	while (big[index] && index < len)
	{
		if (!ft_strncmp(&big[index], little, lent) && (index + lent <= len))
			return (&cpy[index]);
		index++;
	}
	return (NULL);
}
