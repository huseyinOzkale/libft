/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:26:00 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/18 17:07:24 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*a;

	i = 0;
	a = b;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}
