/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:11:23 by fakman            #+#    #+#             */
/*   Updated: 2022/08/04 13:25:36 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac > 0)
	{
		while (av[0][c] != '\0')
		{
			write(1, &av[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
