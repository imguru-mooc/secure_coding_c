#if 0
// 위험한 코드 1.
#include <stdio.h>

enum { ARR_SIZE = 6 };

int main()
{
	char src[ARR_SIZE];
	for (int i = 0; i < ARR_SIZE; i++)
		src[i] = 'A' + i;
	char dst[ARR_SIZE];
	int i;
	for (i = 0; src[i] && i < sizeof(dst); i++)
		dst[i] = src[i];
	dst[i] = '\0';
	printf("%s\n", dst);
	return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

enum { ARR_SIZE = 6 };

int main()
{
	char src[ARR_SIZE];
	for (int i = 0; i < ARR_SIZE; i++)
		src[i] = 'A' + i;
	char dst[ARR_SIZE];
	int i;
	for (i = 0; src[i] && i < sizeof(dst) - 1; i++)
		dst[i] = src[i];
	dst[i] = '\0';
	printf("%s\n", dst);
	return 0;
}
#endif 

#if 0
// 위험한 코드 2.
#include <stdio.h>
int main(int argc, char* argv[])
{
	char prog_name[128];
	strcpy(prog_name, argv[0]);
	// ...
	return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	char* prog_name = malloc(strlen(argv[0]) + 1);
	if (prog_name == NULL) {
		perror("malloc");
		return -1;
	}
	strcpy(prog_name, argv[0]);
	// ...
	free(prog_name);
	return 0;
}
#endif 





