/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe-  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:11:41 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/02 09:23:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= size)
		return (size + srclen);
	while (((i + dstlen) < size) && (src[i]))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (size == (i + dstlen))
		dst[i + dstlen - 1] = '\0';
	dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}
