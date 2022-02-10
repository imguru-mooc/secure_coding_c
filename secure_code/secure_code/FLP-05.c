#if 0
// 위험한 코드
#include <stdio.h>

int main() {
    float f = 10000000000.0f;
    int i = f;

    printf("f: %f\n", f);
    printf("i: %d\n", i);

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <limits.h>

int main() {
    float f = 10000000000.0f;
    int i;

    if (f > (float)INT_MAX || f < (float)(INT_MIN)) {
        printf("error\n");
        return -1;
    }

    i = f;

    printf("f: %f\n", f);
    printf("i: %d\n", i);

    return 0;
}
#endif 
