/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnclen.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tprzybyl <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/20 14:08:57 by tprzybyl     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/20 14:10:02 by tprzybyl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnclen(const char *str, int c, int n)
{
	int i;

	i = 0;
	while (str[i] && n)
	{
		if (str[i] == c)
			n--;
		i++;
	}
	return (i);
}
