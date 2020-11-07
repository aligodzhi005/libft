/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:37:12 by rvena             #+#    #+#             */
/*   Updated: 2020/10/29 16:37:15 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *des, const void *source, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	unsigned long	i;

	i = 0;
	dst = (unsigned char *)des;
	src = (unsigned char *)source;
	if ((dst == NULL && src == NULL) || n == 0)
		return (dst);
	while (i < n)
	{
		*(dst + i) = *(src + i);
		if (*(dst + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char src[10] = "123456";
// 	char dst[22];
// 	char dst1[22];
// 	char *rst;
// 	rst = memccpy(dst, "test basic du memccpy !", 'm', 6);
// 	printf("memcpy : %s\n", rst);
// 	printf("ft_memccpy : %s\n", ft_memccpy(dst1, "test basic du memccpy !", 'm', 6));
	
// 	return 0;
//}
