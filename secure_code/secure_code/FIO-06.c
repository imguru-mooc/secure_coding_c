#if 0
// 위험한 코드
#include <stdio.h>
int main()
{
	FILE out = *stdout;
	fputs("hello, world\n", &out);
	return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
int main()
{
	FILE* out = stdout;
	fputs("hello, world\n", out);
	return 0;
}
#endif