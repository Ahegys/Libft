/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:56:38 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/02 09:23:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strchr(const char *args, int nbr)
{
	while (*args)
	{
		if (*args == (unsigned char) nbr)
			return ((char *) args);
		args++;
	}
	if (*args == (unsigned char) nbr)
		return ((char *)args);
	return (NULL);
}
