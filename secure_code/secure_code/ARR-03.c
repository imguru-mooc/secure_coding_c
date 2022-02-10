#if 0
// 위험한 코드
#include <stdio.h>
enum { BUF_SIZE = 1024 };

void func(const char src[], size_t len) {
    char dest[BUF_SIZE];
    memcpy(dest, src, len * sizeof(char));
    printf("%s\n", dest);
}

int main() {
    char str[] = "hello, world";
    func(str, strlen(str) + 1);

    return 0;
}
#endif 

#if 0
// 해결 방법 1.
#include <stdio.h>
enum { BUF_SIZE = 1024 };

void func(const char src[], size_t len) {
    if (len >= BUF_SIZE)
        return;

    char dest[BUF_SIZE];
    memcpy(dest, src, len * sizeof(char));
    printf("%s\n", dest);
}

int main() {
    char str[] = "hello, world";

    func(str, strlen(str) + 1);
    return 0;
}
#endif 

#if 0
// 해결 방법 2.
#include <stdio.h>
#include <stdlib.h>

void func(const char src[], size_t len) {
    char* dest = (char*)malloc(sizeof(char) * len);
    memcpy(dest, src, len * sizeof(char));
    printf("%s\n", dest);
    free(dest);
}

int main() {
    char str[] = "hello, world";

    func(str, strlen(str) + 1);
    return 0;
}
#endif 
