#if 0
// 위험한 코드
#include <stdio.h>
#define cstring char *

int main() {
    cstring name, tel;

    name = "honggildong";
    tel = "010-000-0000";
    printf("name: %s, tel: %s\n", name, tel);

    return 0;
}
#endif

#if 1
// 해결 방법
#include <stdio.h>
typedef char* cstring;

int main() {
    cstring name, tel;

    name = "honggildong";
    tel = "010-000-0000";
    printf("name: %s, tel: %s\n", name, tel);

    return 0;
}
#endif
