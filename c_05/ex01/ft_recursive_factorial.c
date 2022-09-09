/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:12:00 by fakman            #+#    #+#             */
/*   Updated: 2022/08/09 16:24:05 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 0)
		{
			return (1);
		}
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}

/*int	main()
{
	printf("%d", ft_recursive_factorial(5));
}*/
