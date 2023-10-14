/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:06:42 by soksak            #+#    #+#             */
/*   Updated: 2023/10/14 08:25:59 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_calculate(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
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
	while (i >= 0)
	{
		dest[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	if (sign == -1)
		dest[0] = '-';
	return (dest);
}
