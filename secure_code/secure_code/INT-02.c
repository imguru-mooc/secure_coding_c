#if 0
// 정수의 승계
#include <stdio.h>

int main() {
    char c1 = 100;
    char c2 = 3;
    char c3 = 4;

    char result = c1 * c2 / c3;
    printf("result = %d\n", result);

    return 0;
}
#endif 

#if 0
// 위험한 코드 1.
#include <stdio.h>

int main() {
    int si = -1;
    unsigned int ui = 1;

    if (ui > si)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

int main() {
    int si = -1;
    unsigned int ui = 1;

    if ((int)ui > si)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
#endif 

#if 0
// 위험한 코드 2.
#include <stdlib.h>

int main() {
    int* pArr = (int*)malloc(-1);
    pArr[0] = 0;

    free(pArr);
    return 0;
}
#endif 

#if 0
// 해결 방법 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* pArr = (int*)malloc(-1);
    if (pArr == NULL) {
        perror("malloc");
        exit(-1);
    }
    pArr[0] = 0;

    free(pArr);
    return 0;
}
#endif 
