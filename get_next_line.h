/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex-ubuntu <alex-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:11:07 by alex-ubuntu       #+#    #+#             */
/*   Updated: 2021/12/07 10:16:00 by alex-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#include<sys/select.h> // file descriptor sets "macros"
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#define GNL_ERROR 0
#define GNL_NEW_LINE 1
#define GNL_NO_NEW_LINE 2
#define GNL_EOF 3

/* structure */

typedef struct s_buffer 
{
    int     start;
    int     next_l;
    int     end;
    char    *data;
}              t_buffer;

/* FONCTION PROTOYPES */

char *get_next_line(int fd);
size_t	ft_strlen(const char *s);

#endif