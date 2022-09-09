/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:51:39 by fakman            #+#    #+#             */
/*   Updated: 2022/07/23 14:47:57 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y && x >= 0)
	{
		a = 1;
		while (a <= x)
		{
			if (a == 1 && (b == 1 || b == y))
				ft_putchar('A');
			else if (a == x && (b == 1 || b == y))
				ft_putchar('C');
			else if ((b == 1 || b == y) && (a > 1 && a < x))
				ft_putchar('B');
			else if ((b != 1 || b != y) && (a == 1 || a == x))
				ft_putchar('B');
			else if ((b != 1 || b != y) && (a != 1 || a != x))
				ft_putchar(' ');
		a++;
		}
		ft_putchar('\n');
		b++;
	}	
}
