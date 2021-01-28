#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

ssize_t	ft_read(int fd, const void *buf, size_t count);
ssize_t ft_write(int fd, const void *buf, size_t count);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);

int		main()
{
	ssize_t  size = 10;
	char *s;
	s = malloc(size);
	if (s == NULL)
	{
		printf("errno = %d\n", errno);
		//return (-1);
	}
	memset(s, 'a', size);
	char *dup = ft_strdup(s);
	printf("errno = %d\n", errno);
	(void)dup;
	printf("%s\n", dup);
}
