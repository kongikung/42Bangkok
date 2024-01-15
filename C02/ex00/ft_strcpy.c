/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:37:48 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 20:37:49 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define	arr_size	10
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str1[arr_size] = "testing";
	char	str2[arr_size] = "gnitset";
	printf("Before all function str1 = %s\n", str1);
	printf("After call function str1 = %s", ft_strcpy(str1, str2));
	return (0);
}
