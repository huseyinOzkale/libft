/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:12:12 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/18 13:04:53 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*ret;

	ret = (char *)s;
	a = ft_strlen(ret);
	while (a >= 0)
	{
		if (*ret == (char)c)
			return (ret);
		ret++;
		a--;
	}
	return (0);
}
