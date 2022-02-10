#if 0
// 위험한 코드
#include <stdio.h>
#include <string.h>

char msg[32];

void set_error(const char* error) {
    char msg[32];
    // ...
    strncpy(msg, error, sizeof(msg));
}

int get_fd() {
    // ... 
    return -1;
}

int main() {
    int fd = get_fd();
    if (fd < 0)
        set_error("get_fd error");
    // ...

    printf("error message: %s\n", msg);
    return 0;
}
#endif

#if 1
// 해결 방법
#include <stdio.h>
#include <string.h>

char system_msg[32];

void set_error(const char* error) {
    char msg[32];
    // ...
    strncpy(system_msg, error, sizeof(system_msg));
}

int get_fd() {
    // ... 
    return -1;
}

int main() {
    int fd = get_fd();
    if (fd < 0)
        set_error("get_fd error");
    // ...

    printf("error message: %s\n", system_msg);
    return 0;
}

#endif

