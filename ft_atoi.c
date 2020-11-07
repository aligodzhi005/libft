/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:41:49 by rvena             #+#    #+#             */
/*   Updated: 2020/10/31 16:41:51 by rvena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int res;
    int dig;

    dig = 1;
	i = 0;
	res = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if(str[i] == '-')
    {
        dig = -1;
        i++;
    }
	while (str[i] != '\0')
	{
        if(*(str + i) >= '0' && *(str + i) <= '9')
            res = (res * 10 + *(str + i) - 48);
        else 
            break;
		i++;
	}
	return (dig * res);
}

int main(void)
{
	const char *str1 = "\n";
    const char *str2 = "\n-3.14159";
    const char *str3 = "+31337 with words";
    const char *str4 = "words and 2";
 
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);

    int num5 = ft_atoi(str1);
    int num6 = ft_atoi(str2);
    int num7 = ft_atoi(str3);
    int num8 = ft_atoi(str4);
 
    printf("std::atoi(%s) is %d\n", str1, num1);
    printf("std::atoi(%s) is %d\n", str2, num2);
    printf("std::atoi(%s) is %d\n", str3, num3);
    printf("std::atoi(%s) is %d\n", str4, num4);

    printf("\n");

    printf("std::atoi(%s) is %d\n", str1, num5);
    printf("std::atoi(%s) is %d\n", str2, num6);
    printf("std::atoi(%s) is %d\n", str3, num7);
    printf("std::atoi(%s) is %d\n", str4, num8);
    printf("\n");
}