#if 0
// 위험한 코드 1.
#include <stdio.h>
const char* path;

void open_path() {
    const char str[] = "c:\\a.txt";
    path = str;
}

void hack() {
    const char str[] = "d:\\a.exe";
    printf("path = %s\n", path);
}

int main() {
    open_path();
    hack();

    printf("path = %s\n", path);
    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char* path;

void open_path() {
    const char str[] = "c:\\a.txt";
    path = calloc(1, strlen(str) + 1);
    strncpy(path, str, strlen(str) + 1);
}

void hack() {
    const char str[] = "d:\\a.exe";
    printf("path = %s\n", path);
}

int main() {
    open_path();
    hack();
    printf("path = %s\n", path);
    return 0;
}

#endif


#if 0
// 위험한 코드 2.

#include <stdio.h>

char* init_array() {
    char arr[10] = { 0, };
    return arr;
}

int main() {
    char* pArr = init_array();

    for (int i = 0; i < 10; i++)
        printf("%d ", pArr[i]);
    printf("\n");
    return 0;
}

#endif

#if 0
// 해결 방법

#include <stdio.h>

void init_array(char arr[]) {
    for (int i = 0; i < 10; i++)
        arr[i] = 0;
}

int main() {
    char arr[10];
    init_array(arr);

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

#endif
