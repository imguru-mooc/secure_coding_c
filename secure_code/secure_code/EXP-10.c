#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* pArr = malloc(-1);

    for (int i = 0; i < 10; i++)
        pArr[i] = 0;

    // ...

    free(pArr);
    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* pArr = malloc(-1);
    if (pArr == NULL) {
        printf("malloc error\n");
        exit(-1);
    }

    for (int i = 0; i < 10; i++)
        pArr[i] = 0;

    // ...

    free(pArr);
    return 0;
}
#endif 

