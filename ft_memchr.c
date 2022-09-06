/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 03:30:25 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 05:06:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;

	uc_s = (unsigned char *) s;
	while (n--)
	{
		if (*uc_s == (unsigned char) c)
			return (uc_s);
		uc_s++;
	}
	return (NULL);
}
