#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char* password = "qwer1234";
int main()
{
	char* p = malloc(strlen(password) + 1);
	if (p == NULL) {
		perror("malloc");
		return -1;
	}
	strcpy(p, password);
	free(p);
	printf("%s\n", p);
	return 0;
}
#endif 

#if 1
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char* password = "qwer1234";
int main()
{
	char* p = malloc(strlen(password) + 1);
	if (p == NULL) {
		perror("malloc");
		return -1;
	}
	strcpy(p, password);
	memset(p, '\0', strlen(p));
	free(p);
	printf("%s\n", p);
	return 0;
}
#endif 
