/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:47:20 by rvena             #+#    #+#             */
/*   Updated: 2020/10/31 14:47:22 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int	ft_strlen(const char *src)
{
	char	*temp_src;
	int		count;

	count = 0;
	temp_src = (char *)src;
	while (*temp_src != '\0')
	{
		count++;
		temp_src++;
	}
	return (count);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp_hay;
	int		i;
	int		temp_len;
	int		needle_len;

	needle_len = ft_strlen(needle);
	temp_len = len;
	temp_hay = (char *)haystack;
	if (*needle == 0)
		return (temp_hay);
	while (len > 0 && *temp_hay != '\0')
	{
		i = 0;
		if (*temp_hay == *needle)
		{
			while (*(needle + i) == *(temp_hay + i) && *(needle + i) != '\0')
				i++;
			if ((i == needle_len) && (temp_hay + i - 1) < (haystack + temp_len))
				return (temp_hay);
		}
		temp_hay++;
		len--;
	}
	return (0);
}
