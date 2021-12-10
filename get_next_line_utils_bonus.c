/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex-ubuntu <alex-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:27:20 by alex-ubuntu       #+#    #+#             */
/*   Updated: 2021/12/10 14:27:46 by alex-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*(s++))
		counter++;
	return (counter);
}