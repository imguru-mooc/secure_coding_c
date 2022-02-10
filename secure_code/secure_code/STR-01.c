#if 0
// 위험한 코드
#include <stdio.h>

int main() {
    char* str = "hello";
    str[0] = 'c';

    printf("%s\n", str);
    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

int main() {
    const char* str = "hello";
    str[0] = 'c';

    printf("%s\n", str);
    return 0;
}
#endif 
