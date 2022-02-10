#if 0
// 위험한 코드 1.
#include <stdio.h>

int main() {
    func(1, 2);
    return 0;
}

int func(int a, int b, int c) {
    printf("func(%d, %d, %d)\n", a, b, c);
    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>

int func(int a, int b, int c);

int main() {
    func(1, 2, 3);
    return 0;
}

int func(int a, int b, int c) {
    printf("func(%d, %d, %d)\n", a, b, c);
    return 0;
}

#endif

#if 0
// 위험한 코드 2.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int(*fp)(int);

    fp = add;
    printf("%d\n", fp(1));

    return 0;
}

#endif

#if 1
// 해결 방법
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int(*fp)(int, int);

    fp = add;
    printf("%d\n", fp(1, 1));

    return 0;
}


#endif

