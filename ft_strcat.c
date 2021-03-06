/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconchit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:52:37 by lconchit          #+#    #+#             */
/*   Updated: 2019/09/23 19:16:13 by lconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t l;

	l = ft_strlen(s1) + ft_strlen(s2);
	s1 = s1 + ft_strlen(s1);
	while (*s2 != '\0')
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1 - l);
}
