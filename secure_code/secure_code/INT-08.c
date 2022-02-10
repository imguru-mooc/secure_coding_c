#if 0
// 위험한 코드
#include <stdio.h>

struct {
    int a : 8;
} bits = { 255 };

int main() {
    printf("bits.a = %d\n", bits.a);
    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

struct {
    unsigned int a : 8;
} bits = { 255 };

int main() {
    printf("bits.a = %d\n", bits.a);
    return 0;
}
#endif 
