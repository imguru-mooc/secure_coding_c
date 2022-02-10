#if 0
// 위험한 코드 1.
#include <stdio.h>
int main()
{
	const char* err_msg = "not enough memory";
	const int err_code = 3;
	printf("Error Message: %d(%s)\n", err_msg, err_code);
	return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
int main()
{
	const char* err_msg = "not enough memory";
	const int err_code = 3;
	printf("Error Message: %s(%d)\n", err_msg, err_code);
	return 0;
}
#endif
