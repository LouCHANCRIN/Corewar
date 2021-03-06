/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastcharindex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchancri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:01:49 by lchancri          #+#    #+#             */
/*   Updated: 2018/05/09 14:09:53 by lchancri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_lastcharindex(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	while ((s[a] == '\0' || s[a] == ' ' || s[a] == '\t'
			|| s[a] == '\n') && a != 0)
		a--;
	return (a);
}
