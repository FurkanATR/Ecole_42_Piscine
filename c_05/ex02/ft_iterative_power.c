/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:44:02 by fakman            #+#    #+#             */
/*   Updated: 2022/08/08 19:50:22 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if (power >= 0)
	{
		while (i < power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}

/*int	main()
{
	printf("%d", ft_iterative_power(4, 3));
}*/
