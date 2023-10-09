/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:58:41 by soksak            #+#    #+#             */
/*   Updated: 2023/10/09 18:20:13 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strch(const char *str, int c)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)str;
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == c)
		{
			i++;
			return (&tmp[i]);
		}
		i++;
	}
	return ((char *) NULL);
}

int main ()
{
	char str[50] = "hello world, this a program";
	char a = 'e';

	printf("%s", ft_strch(str, a));
}
