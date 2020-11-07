/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:14:36 by rvena             #+#    #+#             */
/*   Updated: 2020/11/01 16:14:38 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


// int main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = " World!";
// 	printf("res of ft_strjoin : %s\n", ft_strjoin(str1, str2));
// }



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

char *ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int i;

	i = 0;
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if(res == NULL)
		return NULL;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)] != '\0')
	{
		res[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	res[i] = '\0';
	return (res);
}