#if 0
// 위험한 코드
#include <stdio.h>
#define TOSTR(x)    #x
#define LOG(msg)    printf("["__FILE__"("TOSTR(__LINE__)")] "msg)

int main() {
	LOG("hello, world");
	return 0;
}
#endif

#if 1
// 해결 방법
#include <stdio.h>
#define _TOSTR(x)  #x
#define TOSTR(x)    _TOSTR(x)
#define LOG(msg)    printf("["__FILE__"("TOSTR(__LINE__)")] "msg)

int main() {
	LOG("hello, world");
	return 0;
}

#endif