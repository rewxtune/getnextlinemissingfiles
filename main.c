#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd = open("a.txt", O_RDONLY);
	char *a;

	while ((a = get_next_line(fd)))
	{
		printf("%s", a);
	}

	// printf("%s", get_next_line(fd));

	return 0;
}
