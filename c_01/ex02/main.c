/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 05:30:41 by fakman            #+#    #+#             */
/*   Updated: 2022/07/27 05:32:36 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int i  = 7;
	int j  = 3;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("%u\n",*a);
	printf("%u",*b);
}