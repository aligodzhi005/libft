/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:56:34 by rvena             #+#    #+#             */
/*   Updated: 2020/10/31 17:56:37 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		*ft_memset(void *str, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*dst;

	dst = str;
	i = 0;
	while (i < n)
	{
		*dst = (unsigned char)c;
		dst++;
		i++;
	}
	return (str);
}

void			*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		ptr = ft_memset(ptr, 0, count);
		return (ptr);
	}
	return (0);
}
