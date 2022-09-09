/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:59:17 by fakman            #+#    #+#             */
/*   Updated: 2022/08/08 20:12:19 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	var;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		var = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (var);
	}
	else
		return (-1);
}

/*int	main()
{
	printf("%d", ft_fibonacci(6));
}*/
