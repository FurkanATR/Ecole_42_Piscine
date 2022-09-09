/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:19:26 by fakman            #+#    #+#             */
/*   Updated: 2022/08/10 21:22:19 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;
    int     len;

    i = 0;
    while (i < size)
    {
        len += ft_strlen(strs[i]);
        i++;
    }
    len += (ft_strlen(sep) * (size - 1));
	s = malloc(sizeof(int) * len);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

int	main(void)
{
	char *text[5];

	text[0] = "1test";
	text[1] = "deneme";
	text[2] = "yazi";
	text[3] = "ok";
    text[4] = "sad";
	printf("%s\n", ft_strjoin(5, text, " - "));
}
