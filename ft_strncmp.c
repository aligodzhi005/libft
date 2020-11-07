/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:56:58 by rvena             #+#    #+#             */
/*   Updated: 2020/10/31 15:56:59 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const unsigned char *s1, const unsigned char *s2, size_t n)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && n > 0 && *(s1 + i) != '\0')
	{
		i++;
		n--;
		if (n == 0)
			return (0);
	}
	if (*(s1 + i) - *(s2 + i) > 0)
		return (1);
	else if (*(s1 + i) - *(s2 + i) < 0)
		return (-1);
	return (*(s1 + i) - *(s2 + i));
}
