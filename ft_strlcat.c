/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:29:28 by soksak            #+#    #+#             */
/*   Updated: 2023/10/16 01:31:43 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dest_size == 0 || dest_size <= dlen)
		return (slen + dest_size);
	i = dlen;
	j = 0;
	while (src[j] && j < dest_size - i - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
