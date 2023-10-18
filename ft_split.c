/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:06:16 by soksak            #+#    #+#             */
/*   Updated: 2023/10/18 19:45:52 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_createstr(const char *s, size_t len)
{
	size_t	i;
	char	*splitted;

	if (len == 0)
		return (NULL);
	splitted = (char *)malloc(sizeof(char) * len + 1);
	if (!splitted)
		return (NULL);
	i = 0;
	while (i < len)
	{
		splitted[i] = s[i];
		i++;
	}
	splitted[i] = '\0';
	return (splitted);
}

static	size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
			(s[i] == c && s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	save;
	char	**dest;

	dest = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_countword(s, c) && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		save = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		dest[j] = ft_createstr(&s[save], i - save);
		if (!dest[j])
			return (NULL);
		j++;
	}
	dest[j] = NULL;
	return (dest);
}
