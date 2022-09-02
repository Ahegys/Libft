/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <marvin@42.fr>                       +#+  +:+       +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:31:46 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/01 17:34:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (arg);
	return (0);
}
