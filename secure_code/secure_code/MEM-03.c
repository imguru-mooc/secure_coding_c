#if 0
// 위험한 코드 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char name[32];
	int age;
} Human;
typedef struct {
	char name[32];
	int age;
	int id;
} Student;
int main()
{
	Student* p = malloc(sizeof(Human));
	if (p == NULL) {
		perror("malloc");
		return -1;
	}
	// ...
	p->id = 123456;
	// ...
	free(p);
	return 0;
}
#endif 

#if 1
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char name[32];
	int age;
} Human;
typedef struct {
	char name[32];
	int age;
	int id;
} Student;
int main()
{
	Student* p = (Human*)malloc(sizeof(Human));
	if (p == NULL) {
		perror("malloc");
		return -1;
	}
	// ...
	p->id = 123456;
	//...
	free(p);
	return 0;
}
#endif 



