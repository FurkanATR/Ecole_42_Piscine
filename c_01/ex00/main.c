/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:15:54 by fakman            #+#    #+#             */
/*   Updated: 2022/07/27 17:04:47 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*pnbr;
	int	nbr;

	nbr = 1;
	pnbr = &nbr;
	ft_ft(pnbr);
	printf("%d", nbr);
}
