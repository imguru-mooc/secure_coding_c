#if 0
// 위험한 코드
#include <stdio.h>

int main() {
    int packet = 0x80000000;
    
    printf("%x", packet >> 24); // 0xFFFFFF80
    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>

int main() {
    unsigned int packet = 0x80000000;

    printf("%x", packet >> 24); // 0x80
    return 0;
}
#endif
