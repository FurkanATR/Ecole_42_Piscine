/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:10:40 by fakman            #+#    #+#             */
/*   Updated: 2022/08/10 21:43:54 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (!dest)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Merhaba";
	allocated = ft_strdup(str);
	printf("%s", allocated);
}*/
