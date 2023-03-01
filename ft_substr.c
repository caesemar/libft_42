/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:56:15 by jocasado          #+#    #+#             */
/*   Updated: 2022/09/29 15:43:49 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	s1 = (char *)malloc(sizeof(char) * (len +1));
	if (!s1)
		return (0);
	while (i < len)
	{
		if (start < ft_strlen(s))
			s1[i] = (char) s[i + start];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
