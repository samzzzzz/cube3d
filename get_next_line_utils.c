/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyril <gcyril@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 16:29:14 by home              #+#    #+#             */
/*   Updated: 2020/12/11 13:26:16 by gcyril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/random.h"

size_t	ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(const char *str, int start, int len)
{
	int		i;
	char	*dst;

	if (!str)
		return (NULL);
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = str[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((char *)dst)[i] = ((char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

char	*join_and_free(char *s1, char *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*dst;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(dst = (char *)malloc((len1 + len2 + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s1[++i])
		dst[i] = s1[i];
	free(s1);
	s1 = NULL;
	i = -1;
	while (s2[++i])
		dst[len1 + i] = s2[i];
	dst[len1 + i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(str);
	if (!(dup = (char *)malloc((len) * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
