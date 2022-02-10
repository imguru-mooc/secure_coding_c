#if 0
// 위험한 코드 1.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* pArr = (int*)malloc(sizeof(int) * -1);
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
	int* pArr = (int*)malloc(sizeof(int) * -1);
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
// 위험한 코드 2.
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE (10) 
int main()
{
	int* pArr = (int*)malloc(sizeof(int) * ARR_SIZE);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	// ...
	int new_size = ARR_SIZE * -1;
	pArr = realloc(pArr, new_size);
	for (int i = 0; i < ARR_SIZE; i++)
		pArr[i] = i + 1;
	free(pArr);
	return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE (10) 
int main()
{
	int* pArr = (int*)malloc(sizeof(int) * ARR_SIZE);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	// ...
	int new_size = ARR_SIZE * -1;
	int* temp = realloc(pArr, new_size);
	if (temp == NULL) {
		perror("realloc");
		return -1;
	}
	for (int i = 0; i < ARR_SIZE; i++)
		pArr[i] = i + 1;
	free(pArr);
	return 0;
}
#endif