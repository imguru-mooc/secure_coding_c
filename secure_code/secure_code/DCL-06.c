
#if 0
// 위험한 코드
#include <stdio.h>
#include <stdarg.h>

enum { VA_END = -1 };
int average(int first, ...) {
    int sum = 0;
    int cnt = 0;

    va_list args;
    va_start(args, first);

    int i = first;
    while (i != VA_END) {
        sum += i;
        ++cnt;
        i = va_arg(args, int);
    }
    va_end(args);

    return cnt ? sum / cnt : 0;
}

int main() {
    int avg = average(100, 100, 100, 100);
    printf("%d\n", avg);

    return 0;
}
#endif

#if 0
// 해결 방법 1.
#include <stdio.h>
#include <stdarg.h>

enum { VA_END = -1 };
int average(int first, ...) {
    int sum = 0;
    int cnt = 0;

    va_list args;
    va_start(args, first);

    int i = first;
    while (i != VA_END) {
        sum += i;
        ++cnt;
        i = va_arg(args, int);
    }
    va_end(args);

    return cnt ? sum / cnt : 0;
}

int main() {
    int avg = average(100, 100, 100, 100, VA_END);
    printf("%d\n", avg);

    return 0;
}

#endif

#if 1
// 해결 방법 2.
#include <stdio.h>
#include <stdarg.h>

int average(int cnt, ...) {
    if (cnt == 0)
        return 0;

    va_list args;
    va_start(args, cnt);

    int sum = 0;
    for (int i = 0; i < cnt; i++)
        sum += va_arg(args, int);
    va_end(args);

    return sum / cnt;
}

int main() {
    int avg = average(4, 100, 100, 100, 100);
    printf("%d\n", avg);

    return 0;
}

#endif
