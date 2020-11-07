/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:09:07 by rvena             #+#    #+#             */
/*   Updated: 2020/11/04 15:09:08 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

static int ft_inset(char const s1, char const *set)
{
	char	*temp_set;
	int 	j;

	temp_set = (char *)set;
	j = 0;
	while (*temp_set != '\0')
	{
		if (*temp_set == s1)
		{
			j = 1;
			break;
		}
		temp_set++;
	}
	return (j);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char 			*res;
	unsigned long	i;
	unsigned long	j;
	unsigned long	len;
	int 			t;

	i = 0;
	len = ft_strlen(s1) - 1;
	j = len;
	while (ft_inset(s1[i], set) == 1)
		i++;
	t = i;
	while (ft_inset(s1[j], set) == 1)
		j--;
	j = len - j;
	res = malloc((len + 2 - i - j) * sizeof(char));
	while ((s1 + t) <= (s1 + len - j))
	{
		*res = s1[t];
		t++;
		res++;
	}
	*res = '\0';
	res = res - t + i;
	return (res);
}

int main(void)
{
	char str1[15] = " Hello World! ";
	char str[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	// printf("ft_strlen = %lu\n", ft_strlen(str));
	// ft_countsetbegin(str, "Hell", &a);
	// printf ("ft_countsetbegin : %d\n", a);
	// ft_countsetend(str, "World!", &b, ft_strlen(str));
	// printf ("ft_countsetend : %d\n", b);
	// printf ("%s\n", str);
	printf("str1 = %s\n", str1);
	printf("result of ft_strtrim : %s", ft_strtrim(str1, " \t\n"));
	return (0);
}