#if 0
// 위험한 코드
#include <stdio.h>
#include <assert.h>

int process(int i) {
    assert(i++ > 0);
    printf("%d\n", i);
}

int main() {
    int num;

    printf("input size: ");
    int ret = scanf("%d", &num);
    if (ret != 1)
        printf("scanf error\n");
    else
        process(num);

    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#include <assert.h>

int process(int i) {
    assert(i > 0);
    ++i;
    printf("%d\n", i);
}

int main() {
    int num;

    printf("input size: ");
    int ret = scanf("%d", &num);
    if (ret != 1)
        printf("scanf error\n");
    else
        process(num);

    return 0;
}

#endif
