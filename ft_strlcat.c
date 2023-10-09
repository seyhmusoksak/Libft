/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:29:28 by soksak            #+#    #+#             */
/*   Updated: 2023/10/09 17:14:58 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i])
		i++;
	if (dest_size == 0)
		return (i);
	j = 0;
	while (src[j] && j < dest_size - i - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	while (dest[j])
		j++;
	return (j);
}
