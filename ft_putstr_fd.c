/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:14:39 by jaqribei          #+#    #+#             */
/*   Updated: 2023/08/04 18:54:47 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (!s)
		return ;
	if (fd > 0)
	{
		while (s[index] != '\0')
		{
			write (fd, &s[index], 1);
			index++;
		}
	}
}

/* int	main(void)
{
	ft_putstr_fd("\nend!", -1);
	return (0);
} */