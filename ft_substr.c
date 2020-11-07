/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:20:48 by rvena             #+#    #+#             */
/*   Updated: 2020/11/01 15:20:50 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static unsigned long ft_strlen(const char *src)
{
	unsigned char	*temp_src;
	unsigned long	count;

	count = 0;
	temp_src = (unsigned char *)src;
	while(*temp_src != '\0')
	{
		count++;
		temp_src++;
	}
	return count;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	int l;
	char *substr;

	l = (ft_strlen(s) - start + 1) * sizeof(char);
	i = 0;
	substr = (char *)malloc(l + 1);
	if(substr == NULL)
		return NULL;
	while (*(s + start) != '\0' && len > 0)
	{
		*(substr + i) = *(s + start);
		i++;
		start++;
		len--;
	}
	*(substr + i) = '\0';
	return (substr);
}