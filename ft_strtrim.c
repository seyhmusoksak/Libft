/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:03:15 by soksak            #+#    #+#             */
/*   Updated: 2023/10/12 23:19:44 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strchr.c"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	int 	i;
	char	*dest;

	end = ft_strlen(s) - 1;
	start = 0;
	while (ft_strchr(s, set[start]) && s[start])
	{
		start++;
	}
	while (ft_strchr(s, set[end]) && end >= 0)
	{
		end--;
	}
	dest = (char *)malloc(sizeof(char) * end - start + 1);
	if (!dest)
		return (0);
	while (start < end)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[start] = '\0';
	return (dest);
}

int main ()
{
	printf("%s", ft_strtrim("abmerhaba", "ab"));
}
