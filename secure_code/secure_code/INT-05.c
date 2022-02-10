#if 0
// 위험한 코드 1.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char buff[32];
    printf("input integer: ");
    fgets(buff, sizeof(buff), stdin);

    int data = atoi(buff);
    printf("-> %d\n", data);

    return 0;
}
#endif

#if 0
// 위험한 코드 2.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char buff[32];
    printf("input integer: ");
    fgets(buff, sizeof(buff), stdin);

    int data;
    int ret = sscanf(buff, "%d", &data);
    if (ret == 0 || ret == EOF) {
        perror("sscanf");
        exit(-1);
    }

    printf("-> %d\n", data);
    return 0;
}
#endif

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
    char buff[32];
    printf("input integer: ");
    fgets(buff, sizeof(buff), stdin);

    errno = 0;
    char* end_ptr;
    long data = strtol(buff, &end_ptr, 10);
    if (errno == ERANGE) {
        perror("strtol");
        exit(-1);
    }
    else if (end_ptr == buff) {
        fprintf(stderr, "not valid numeric input\n");
        exit(-1);
    }
    else if (*end_ptr != '\n' && *end_ptr != '\0') {
        fprintf(stderr, "extra characters on input line\n");
        exit(-1);
    }

    printf("-> %ld\n", data);
    return 0;
}
#endif
