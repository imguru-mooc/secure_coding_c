#if 0
// 위험한 코드
#include <stdio.h>

int main() {
    int cnt = 0;
    for (float i = 0.1f; i <= 1.0f; i += 0.1f)
        ++cnt;

    printf("cnt = %d\n", cnt);
    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

int main() {
    int cnt = 0;
    for (size_t i = 0; i < 10; i++)
        ++cnt;

    printf("cnt = %d\n", cnt);
    return 0;
}
#endif 
