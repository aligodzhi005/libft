/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:09:56 by rvena             #+#    #+#             */
/*   Updated: 2020/10/30 11:09:59 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned long	ft_strlen(const char *src)
{
	unsigned char	*temp_src;
	unsigned long	count;

	count = 0;
	temp_src = (unsigned char *)src;
	while (*temp_src != '\0')
	{
		count++;
		temp_src++;
	}
	return (count);
}
