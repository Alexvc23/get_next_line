/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex-ubuntu <alex-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:13:51 by alex-ubuntu       #+#    #+#             */
/*   Updated: 2021/12/07 10:14:45 by alex-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*(s++))
		counter++;
	return (counter);
}