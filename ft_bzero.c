/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:11:01 by rvena             #+#    #+#             */
/*   Updated: 2020/10/29 15:11:04 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned long	i;
	unsigned char	*dst;

	dst = str;
	i = 0;
	while (i < n)
	{
		*dst = (unsigned char)0;
		dst++;
		i++;
	}
}
