#if 0
// 위험한 코드
#include <stdio.h>

int sum_to(int num) {
    int sum;
    for (int i = 1; i <= num; i++)
        sum += i;
    return sum;
}

int main() {
    int input;
    printf("input number: ");
    scanf("%d", &input);
    printf("sum 1 to %d: %d\n", input, sum_to(input));

    return 0;
}
#endif


#if 0
// 해결 방법
#include <stdio.h>

int sum_to(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++)
        sum += i;
    return sum;
}

int main() {
    int input;
    printf("input number: ");
    scanf("%d", &input);
    printf("sum 1 to %d: %d\n", input, sum_to(input));

    return 0;
}

#endif
