/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <marvin@42.fr>                       +#+  +:+       +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:40:54 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/01 22:20:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	if (arg >= 1 && arg <= 255)
		return (arg);
	return (0);
}