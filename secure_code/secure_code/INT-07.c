#if 0
// 위험한 코드
#include <stdio.h>

enum { DEBUG, WARN, ERROR = 0 };

int main() {
    printf("DEBUG = %d\n", DEBUG);
    printf(" WARN = %d\n", WARN);
    printf("  ERR = %d\n", ERROR);

    if (DEBUG == ERROR)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

enum { DEBUG, WARN, ERROR };

int main() {
    printf("DEBUG = %d\n", DEBUG);
    printf(" WARN = %d\n", WARN);
    printf("  ERR = %d\n", ERROR);

    if (DEBUG == ERROR)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
#endif 


