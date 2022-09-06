/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:25:50 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/01 17:26:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if ((arg >= 48 && arg <= 57)
		|| (arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	return (0);
}