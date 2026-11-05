/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: q <q@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 08:55:55 by username          #+#    #+#             */
/*   Updated: 2026/11/04 07:28:42 by q                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *d, int c, size_t n);

void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *c);
void	*ft_memcpy(void *d, const void *s, size_t n);
void	*ft_memmove(void *d, const void *s, size_t n);
size_t	ft_strlcpy(char *d, const char *s, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlcat(char *d, const char *s, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);
#endif
