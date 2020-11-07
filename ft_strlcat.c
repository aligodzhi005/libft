/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:54:11 by rvena             #+#    #+#             */
/*   Updated: 2020/10/30 12:54:13 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static unsigned long	ft_strlen(const char *src)
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

long					ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	char				*temp_src;
	char				temp[dst_size - ft_strlen(dst) - 1];
	unsigned long		i;
	long				len;

	i = 0;
	len = (ft_strlen(dst) < dst_size) ? ft_strlen(dst) : dst_size;
	len += ft_strlen(src);
	temp_src = (char *)src;
	if (dst_size != 0)
	{
		while (dst[i] != '\0')
			i++;
		while (i < (dst_size - 1) && temp_src != '\0')
		{
			temp[i] = *temp_src;
			dst[i] = temp[i];
			i++;
			temp_src++;
		}
		dst[i] = '\0';
	}
	return (len);
}
