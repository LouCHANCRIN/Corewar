/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vect_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 09:15:37 by pierre            #+#    #+#             */
/*   Updated: 2017/12/20 09:16:11 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

t_vect				*ft_vect_init(t_vect *v, int x, int y, int z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	v->w = 1;
	return (v);
}
