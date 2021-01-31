#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#define GREEN "\033[32;1m"
#define WHITE "\033[00m"
#define YELLOW "\033[33m"

ssize_t	ft_read(int fd, const void *buf, size_t count);
ssize_t ft_write(int fd, const void *buf, size_t count);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);

int		main()
{
	/* FT_STRLEN */
	printf("%s---TESTTING FT_STRLEN---%s\n", GREEN, WHITE);
	
	printf(" - %sstr = \"\"%s\n", YELLOW, WHITE);
	printf("or = %zu\n", strlen(""));
	printf("ft = %zu\n", ft_strlen(""));
	
	printf(" - %sstr = \"Hello Libasm\"%s\n", YELLOW, WHITE);
	printf("or = %zu\n", strlen("Hello Libasm"));
	printf("ft = %zu\n", ft_strlen("Hello Libasm"));

	/* FT_STRCPY */
	printf("%s---TESTTING FT_STRCPY---%s\n", GREEN, WHITE);
	char dst1[15], dst2[15];
	char *src = "Ft_strcpy Test";
	
	printf(" - %ssrc = \"\", dst1[15], dst2[15]%s\n", YELLOW, WHITE);
	printf("or_ret = |%s|\n", strcpy(dst1, ""));
	printf("ft_ret = |%s|\n", ft_strcpy(dst2, ""));
	printf("or_dst1 = |%s|\n", dst1);
	printf("ft_dst2 = |%s|\n", dst2);

	printf(" - %ssrc = \"Ft_strcpy Test\", dst1[15], dst2[15]%s\n", YELLOW, WHITE);
	printf("or_ret = |%s|\n", strcpy(dst1, src));
	printf("ft_ret = |%s|\n", ft_strcpy(dst2, src));
	printf("or_dst1 = |%s|\n", dst1);
	printf("ft_dst2 = |%s|\n", dst2);
	
	/* FT_STRCMP */
	printf("%s---TESTTING FT_STRCMP---%s\n", GREEN, WHITE);

	printf(" - %sstr1 = \"\", str2 = \"\"%s\n", YELLOW, WHITE);
	printf("or = %d\n", strcmp("", ""));
	printf("ft = %d\n", ft_strcmp("", ""));

	printf(" - %sstr1 = \"A\", str2 = \"a\"%s\n", YELLOW, WHITE);
	printf("or = %d\n", strcmp("A", "a"));
	printf("ft = %d\n", ft_strcmp("A", "a"));
	
	printf(" - %sstr1 = \"NULLL\", str2 = \"NULL\"%s\n", YELLOW, WHITE);
	printf("or = %d\n", strcmp("NULLL", "NULL"));
	printf("ft = %d\n", ft_strcmp("NULLL", "NULL"));
	
	/* FT_STRDUP */
	printf("%s---TESTTING FT_STRDUP---%s\n", GREEN, WHITE);
	char *s = "ft_strdup test";

	printf(" - %sstr = \"\"%s\n", YELLOW, WHITE);
	printf("or = |%s|\n", strdup(""));
	printf("ft = |%s|\n", ft_strdup(""));
	printf("errno = %d\n", errno);

	errno = 0;
	printf(" - %sstr = \"ft_strdup test\"%s\n", YELLOW, WHITE);
	printf("or = |%s|\n", strdup(s));
	printf("ft = |%s|\n", ft_strdup(s));
	printf("errno = %d\n", errno);

	/* FT_WRITE */
	printf("%s---TESTTING FT_WRITE---%s\n", GREEN, WHITE);

	errno = 0;
	write(1, "or = HELLO FT_WRITE", 20);
	printf("\terrno = %d\n", errno);
	errno = 0;
	ft_write(1, "ft = HELLO FT_WRITE", 20);
	printf("\terrno = %d\n", errno);
	
	printf(" - %snegative fd%s\n", YELLOW, WHITE);
	errno = 0;
	write(-1, "HELLO FT_WRITE", 20);
	printf("(or) errno = %d\n", errno);
	errno = 0;
	ft_write(-1, "HELLO FT_WRITE", 20);
	printf("(ft) errno = %d\n", errno);

	printf(" - %sNULL buffer%s\n", YELLOW, WHITE);
	errno = 0;
	write(1, NULL, 20);
	printf("(or) errno = %d\n", errno);
	errno = 0;
	ft_write(1, NULL, 20);
	printf("(ft) errno = %d\n", errno);
	
	/* FT_READ */
	printf("%s---TESTTING FT_READ---%s\n", GREEN, WHITE);
	char buf[10];

	errno = 0;
	read(0, buf, 10);
	printf("or = %s", buf);
	printf("(or) errno = %d\n", errno);
	errno = 0;
	ft_read(0, buf, 10);
	printf("ft = %s", buf);
	printf("(ft) errno = %d\n", errno);

	printf(" - %snegative fd%s\n", YELLOW, WHITE);
	errno = 0;
	read(-1, "HELLO FT_WRITE", 20);
	printf("(or) errno = %d\n", errno);
	errno = 0;
	ft_read(-1, "HELLO FT_WRITE", 20);
	printf("(ft) errno = %d\n", errno);

	printf(" - %sNULL buffer%s\n", YELLOW, WHITE);
	errno = 0;
	read(1, NULL, 20);
	printf("(or) errno = %d\n", errno);
	errno = 0;
	ft_read(1, NULL, 20);
	printf("(ft) errno = %d\n", errno);
	
}
