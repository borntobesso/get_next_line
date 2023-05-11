/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:21:12 by sojung            #+#    #+#             */
/*   Updated: 2021/12/07 17:36:44 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_chr_newline(char *buf);
char	*ft_put_line(char *buf);
char	*ft_return_left(char *buf, int index_r);
int		ft_strlen(char *s);
char	*ft_strjoin(char *left, char *buf);
char	*ft_strdup(char *s);
char	*ft_clean(char **left, char *buf);
char	*ft_joinleft(char **left, int fd);
char	*ft_return(char **left, char **buf, int fd);

#endif
