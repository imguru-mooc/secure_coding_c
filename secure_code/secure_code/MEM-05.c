#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* pArr = malloc(0);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	for (int i = 0; i < 10; i++)
		pArr[i] = 0;
	free(pArr);
	return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
int main()
{
	size_t size = 0;
	if (size < 1) {
		printf("size is 0\n");
		return -1;
	}
	int* pArr = malloc(size);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	for (int i = 0; i < 10; i++)
		pArr[i] = 0;
	free(pArr);
	return 0;
}
#endif 
