#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE    (10)

int main() {
    int** pArr = (int**)malloc(4 * ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
        pArr[i] = (int*)malloc(4 * ARR_SIZE);

    // ...

    for (int i = 0; i < ARR_SIZE; i++)
        free(pArr[i]);
    free(pArr);

    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE    (10)

int main() {
    int** pArr = (int**)malloc(sizeof(int*) * ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
        pArr[i] = (int*)malloc(sizeof(int) * ARR_SIZE);

    // ...

    for (int i = 0; i < ARR_SIZE; i++)
        free(pArr[i]);
    free(pArr);

    return 0;
}
#endif
