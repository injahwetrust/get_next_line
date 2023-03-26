/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:20:31 by bvaujour          #+#    #+#             */
/*   Updated: 2022/12/07 13:21:30 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/uio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*ft_strjoin(char *left_str, char *buff);
char	*ft_get_line(char *str);
char	*ft_new_save(char *save);
char	*ft_read_to_save(int fd, char *save);
char	*get_next_line(int fd);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);

#endif
