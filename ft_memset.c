/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:37:19 by soksak            #+#    #+#             */
/*   Updated: 2023/10/16 14:07:26 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)str;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (str);
}

int main()
{ // 318 ->2 21->256 32-> 8633
	int s[] = {318, 21, 32};

	ft_memset(&s[0], 0 ,2);
	ft_memset(s, 2 ,1);
	ft_memset(&s[1], 1 ,2);
	ft_memset(&s[1], 0 ,1);
	ft_memset(&s[2], 185, 2);
	ft_memset(&s[2], 8448, 2);



	printf("%d\n", s[0]);
	printf("%d\n", s[1]);
	printf("%d", s[2]);

}
