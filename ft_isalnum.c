/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:57:12 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/12 13:57:15 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if ((arg >= 48 && arg <= 57)
		|| (arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	return (0);
}
