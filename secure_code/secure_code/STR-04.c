#if 0
// 위험한 코드 1.
#include <stdio.h>

int main() {
    char buf[32];
    gets(buf);
    printf("%s\n", buf);

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>

int main() {
    char buf[32];
    fgets(buf, sizeof(buf), stdin);
    printf("%s\n", buf);

    return 0;
}
#endif 

#if 0
// 위험한 코드 2.
#include <stdio.h>
int main(int argc, char* argv[]) {
    char name[16];
    printf("input name: ");
    scanf("%s", name);
    printf("-> %s\n", name);
    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#define TO_STR(x) #x 
#define STR_LIMIT(x) TO_STR(x) 
#define INPUT_SIZE 15 
int main(int argc, char* argv[]) {
    char name[INPUT_SIZE + 1];
    printf("input name: ");
    scanf("%"STR_LIMIT(INPUT_SIZE)"s", name);
    printf("-> %s\n", name);
    return 0;
}
#endif 
