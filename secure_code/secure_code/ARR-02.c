#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>

enum { TABLESIZE = 10 };
int* table = NULL;

int insert_in_table(int pos, int value) {
    if (!table) {
        table = (int*)malloc(sizeof(int) * TABLESIZE);
        if (table == NULL) {
            perror("malloc");
            exit(-1);
        }
    }

    if (pos >= TABLESIZE)
        return -1;

    table[pos] = value;
    return 0;
}

int main() {
    if (insert_in_table(-5, 100) < 0)
        printf("insert_in_table error\n");

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>

enum { TABLESIZE = 10 };
int* table = NULL;

int insert_in_table(size_t pos, int value) {
    if (!table) {
        table = (int*)malloc(sizeof(int) * TABLESIZE);
        if (table == NULL) {
            perror("malloc");
            exit(-1);
        }
    }

    if (pos >= TABLESIZE)
        return -1;

    table[pos] = value;
    return 0;
}

int main() {
    if (insert_in_table(-5, 100) < 0)
        printf("insert_in_table error\n");

    return 0;
}
#endif 


