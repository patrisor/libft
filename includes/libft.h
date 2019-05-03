/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 13:20:29 by patrisor          #+#    #+#             */
/*   Updated: 2019/05/03 05:50:56 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 42

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

int				get_next_line(const int fd, char **line);
int				ft_new_line(char **s, char **line, int fd, int bytes);
int				ft_countwords(char const *str, char c);
void			*ft_memset(void *str, int c, size_t len);
void			*ft_nmemset(void *b, int c, size_t len);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_isdigit(int c);
int				ft_isOdd(int num);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strndup(const char *s1, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *big, const char *little);
char			*ft_strchange(size_t size, char c);
char			*ft_strinit(size_t size, int c);
char			*ft_itoa(int n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putendl(char const *s);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int n);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putstr(char const *s);
void			ft_strclr(char *s);
void			ft_strdel(char **as);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			**ft_strsplit(char const *s, char c);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
int				ft_islower(int c);
int				ft_isupper(int c);
void			ft_swap(void *data1, void *data2, size_t size);
void			ft_quicksort(int *array, int left, int right);

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(const void *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *n);
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_lstlen(t_list *head);

typedef unsigned char		t_uint8;
typedef unsigned short		t_uint16;
typedef unsigned int		t_uint32;
typedef unsigned long long	t_uint64;

typedef signed char			t_int8;
typedef signed short		t_int16;
typedef signed int			t_int32;
typedef signed long long	t_int64;

int				ft_pow(int x, int y);
double			ft_sqrt(double x);
int				ft_add(int a, int b);

#endif
