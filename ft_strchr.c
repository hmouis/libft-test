/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:30:12 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/25 11:07:21 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*


#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "abcdefghegjdjfdkkfdj";
	char *c = ft_strchr(s,'j');
	printf("%s\n",c);
	return (0);
}*/