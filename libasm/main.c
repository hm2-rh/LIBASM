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
	char *s = "EveryThing Is";
	char *dup = ft_strdup(s);
	printf("%s\nerrno= %d\n", dup, errno);
}
