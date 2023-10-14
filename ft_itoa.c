/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:06:42 by soksak            #+#    #+#             */
/*   Updated: 2023/10/14 05:56:40 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_calculate(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		while (n / 10 != 0)
		{
			n = n / 10;
			i++;
		}
		return (i + 2);
	}
	else if (n > 0)
	{
		while (n / 10 != 0)
		{
			n = n / 10;
			i++;
		}
		return (i + 1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		sign;
	char	*dest;

	i = ft_calculate(n);
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	dest[i--] = '\0';
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	while (i > 0)
	{
		dest[i] = '0' + (n % 10);
		n = n / 10;
		if (sign < 0 && i == 1)
			dest[i - 1] = '-';
		i--;
	}
	return (dest);
}

int main ()
{
	printf("%s", ft_itoa(4));
}
