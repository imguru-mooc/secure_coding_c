#if 0
// 위험한 코드 1.
#include <stdio.h>
#include <stdlib.h>
enum { MIN_SIZE_ALLOWED = 32 };
int verify_list(char* list, size_t size)
{
	if (size < MIN_SIZE_ALLOWED) {
		free(list);
		return -1;
	}
	return 0;
}
void process_list(size_t size)
{
	char* list = malloc(size);
	if (list == NULL) {
		perror("malloc");
		exit(-1);
	}
	if (verify_list(list, size) < 0) {
		free(list);
		return;
	}
	// ...
	free(list);
}
int main()
{
	process_list(10);
	return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
enum { MIN_SIZE_ALLOWED = 32 };
int verify_list(char* list, size_t size)
{
	if (size < MIN_SIZE_ALLOWED)
		return -1;
	return 0;
}
void process_list(size_t size)
{
	char* list = malloc(size);
	if (list == NULL) {
		perror("malloc");
		exit(-1);
	}
	if (verify_list(list, size) < 0) {
		free(list);
		return;
	}
	// ...
	free(list);
}
int main()
{
	process_list(10);
	return 0;
}
#endif 
