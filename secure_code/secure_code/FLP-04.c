#if 0
// 위험한 코드
#include <stdio.h>

int main() {
    short a = 533;
    int b = 6789;
    long c = 466438237;

    float d = a / 7;    // d는 76.0
    printf("d : %f\n", d);

    double e = b / 30;  // e는 226.0
    printf("d : %f\n", e);

    double f = c * 789; // f는 오버플로우되어 음수일 수 있다.
    printf("d : %f\n", f);

    return 0;
}
#endif 

#if 0
// 해결 방법 1.
#include <stdio.h>

int main() {
    short a = 533;
    int b = 6789;
    long c = 466438237;

    float d = a / 7.0f;
    printf("d : %f\n", d);

    double e = b / 30.0;
    printf("d : %f\n", e);

    double f = (double)c * 789;
    printf("d : %f\n", f);

    return 0;
}
#endif 

#if 0
// 해결 방법 2.
#include <stdio.h>

int main() {
    short a = 533;
    int b = 6789;
    long c = 466438237;

    float d = a;
    d /= 7;
    printf("d : %f\n", d);

    double e = b;
    e /= b;
    printf("d : %f\n", e);

    double f = c;
    f *= 789;
    printf("d : %f\n", f);

    return 0;
}
#endif