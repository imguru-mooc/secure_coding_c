#if 0
// 위험한 코드 
#include <stdio.h> 
#include <string.h>
int main()
{
	char buf[32];
	if (fgets(buf, sizeof(buf), stdin)) {
		buf[strlen(buf) - 1] = '\0';
		printf("-> %s\n", buf);
	}
	else {
		printf("fgets error\n");
	}
	return 0;
}
#endif 

#if 0
// 해결 방법 
#include <stdio.h>
#include <string.h>
int main()
{
	char buf[32];
	if (fgets(buf, sizeof(buf), stdin)) {
		if (*buf)
			buf[strlen(buf) - 1] = '\0';
		printf("-> %s\n", buf); 
	}
	else {
		printf("fgets error\n");
	}
	return 0;
}
#endif 