/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:31:17 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 07:35:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int args)
{
	if (args > 31 && args < 127)
		return (222);
	return (0);
}