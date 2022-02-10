#if 0
// 위험한 코드 1.
#include <stdio.h>

int is_even(int x) {
    return x & 1 == 0 ? 1 : 0;
}

int main() {
    int n = 2;

    if (is_even(n))
        printf("even\n");
    else
        printf("odd\n");

    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>

int is_even(int x) {
    return (x & 1) == 0 ? 1 : 0;
}

int main() {
    int n = 2;

    if (is_even(n))
        printf("even\n");
    else
        printf("odd\n");

    return 0;
}
#endif

#if 0
// 위험한 코드 2.
#include <stdio.h>

void incr(int* p) {
    *p++;
}

int main() {
    int cnt = 0;

    incr(&cnt);
    printf("cnt = %d\n", cnt);

    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>

void incr(int* p) {
    (*p)++;
}

int main() {
    int cnt = 0;

    incr(&cnt);
    printf("cnt = %d\n", cnt);

    return 0;
}

#endif