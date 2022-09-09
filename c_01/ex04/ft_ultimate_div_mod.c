/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:18:14 by fakman            #+#    #+#             */
/*   Updated: 2022/07/27 20:09:38 by fakman           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>











void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		a = div;
		b = &mod;
	}
}
