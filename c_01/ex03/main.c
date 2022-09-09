/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 05:34:33 by fakman            #+#    #+#             */
/*   Updated: 2022/07/27 05:37:36 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a  = 5;
	int b  = 2;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);

	printf("%d \n",*div);
	printf("%d",*mod);
}
