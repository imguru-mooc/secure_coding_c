#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>
enum { ARR_SIZE = 10 };
int main()
{
	int* pArr = malloc(sizeof(int) * ARR_SIZE);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	free(pArr);
	// ...
	free(pArr);
	return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
enum { ARR_SIZE = 10 };
int main()
{
	int* pArr = malloc(sizeof(int) * ARR_SIZE);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	free(pArr);
	pArr = NULL;
	// ...
	free(pArr);
	return 0;
}

#endif 
