/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaktion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:44:40 by olaktion          #+#    #+#             */
/*   Updated: 2018/01/03 14:03:58 by olaktion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int n)
{
	if ((n <= 57 && n >= 48) || (n <= 90 && n >= 65) ||
			(n <= 122 && n >= 97))
		return (1);
	else
		return (0);
}
