/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:53:56 by afelipe-          #+#    #+#             */
/*   Updated: 2022/09/12 13:53:59 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int args)
{
	if (args >= 'a' && args <= 'z')
		return (args - 32);
	return (args);
}
