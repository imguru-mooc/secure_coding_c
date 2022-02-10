#if 0
// 위험한 코드
#include <stdio.h>

void clear(int arr[]) {
    for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); i++)
        arr[i] = 0;
}

int main() {
    int arr[5];

    clear(arr);
    for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); i++)
        printf("arr[%u] = %d\n", i, arr[i]);

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

void clear(int arr[], int len) {
    for (size_t i = 0; i < len; i++)
        arr[i] = 0;
}

int main() {
    int arr[5];
    size_t len = sizeof(arr) / sizeof(*arr);

    clear(arr, len);
    for (size_t i = 0; i < len; i++)
        printf("arr[%u] = %d\n", i, arr[i]);

    return 0;
}
#endif
