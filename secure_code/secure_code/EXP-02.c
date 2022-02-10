#if 0
// 위험한 코드
#include <stdio.h>
#define SIZE_MAX    (5)

int main() {
    int arr[SIZE_MAX] = { 0,1,2,3,0 };

    int i = 0;
    int cnt = 0;
    while ((arr[i] == 0) && (++i < SIZE_MAX))
        ++cnt;
    printf("%d\n", cnt);

    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#define SIZE_MAX    (5)

int main() {
    int arr[SIZE_MAX] = { 0,2,3,4,0 };

    int cnt = 0;
    for (int i = 0; i < SIZE_MAX; i++) {
        if (arr[i] == 0)
            ++cnt;
    }
    printf("%d\n", cnt);

    return 0;
}
#endif