/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:23:39 by kali              #+#    #+#             */
/*   Updated: 2024/01/15 10:23:43 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;
	
	i = 0;
	
	while((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	int	len;
	
	len = 3;
	char	str1[10] = "testing";
	char	str2[10] = "gnitset";

	printf("Before all function of str1 = %s\n", str1);
	printf("Before all function of str2 = %s\n", str2);
	printf("After call function str1 = %s", ft_strncpy(str1, str2, len));
	return (0);
}
