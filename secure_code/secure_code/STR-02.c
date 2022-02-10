#if 0
// 위험한 코드
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello, world";
    char* token = strtok(str, ",");
    printf("%s\n", str);

    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[] = "hello, world";

    char* copy = malloc(strlen(str) + 1);
    strncpy(copy, str, strlen(str) + 1);

    char* token = strtok(copy, ",");
    printf("%s\n", str);

    free(copy);
    return 0;
}
#endif
