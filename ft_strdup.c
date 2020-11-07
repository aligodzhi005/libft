/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:33:44 by rvena             #+#    #+#             */
/*   Updated: 2020/10/31 18:33:45 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
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

static size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char			*temp_dst;
	char			*temp_src;
	char			temp[dstsize];
	unsigned long	i;

	i = 0;
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	while (i < dstsize - 1)
	{
		temp[i] = *(temp_src + i);
		i++;
	}
	i = 0;
	while (i < dstsize - 1)
	{
		*(temp_dst + i) = temp[i];
		i++;
	}
	*(temp_dst + i) = 0;
	return (ft_strlen(temp_src));
}

char				*ft_strdup(const char *s1)
{
	char *temp_s1;

	temp_s1 = malloc(ft_strlen(s1) * sizeof(char));
	if (temp_s1 == NULL)
		return (NULL);
	ft_strlcpy(temp_s1, s1, ft_strlen(s1) + 1);
	return (temp_s1);
}
