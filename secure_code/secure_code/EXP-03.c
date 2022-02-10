#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _string {
    char arr[10];
    int len;
} string;

string* make_str(const char* str) {
    string* p = malloc(14);
    strcpy(p->arr, str);
    p->len = strlen(str);

    return p;
}

int main() {
    string* hello = make_str("hello");

    string buf;
    memcpy(&buf, hello, sizeof(string));

    free(hello);
    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _string {
    char arr[10];
    int len;
} string;

string* make_str(const char* str) {
    string* p = malloc(sizeof(string));
    strcpy(p->arr, str);
    p->len = strlen(str);

    return p;
}

int main() {
    string* hello = make_str("hello");

    string buf;
    memcpy(&buf, hello, sizeof(string));

    free(hello);
    return 0;
}
#endif