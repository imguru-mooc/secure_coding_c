#if 0
// 위험한 코드 1.
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int uint1, uint2, sum = 0;
    uint1 = UINT_MAX;
    uint2 = 1;

    sum = uint1 + uint2;
    printf("sum : %u\n", sum);

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int uint1, uint2, result = 0;
    uint1 = UINT_MAX;
    uint2 = 1;

    if (uint1 > UINT_MAX - uint2) {
        fprintf(stderr, "int wrapping!\n");
        exit(-1);
    }
    result = uint1 + uint2;
    printf("result = %u\n", result);

    return 0;
}
#endif 

#if 0
// 위험한 코드 2.
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int uint1, uint2, result = 0;
    uint1 = 0;
    uint2 = 1;

    result = uint1 - uint2;
    printf("result = %u\n", result);

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int uint1, uint2, result = 0;
    uint1 = 0;
    uint2 = 1;

    if (uint1 < uint2) {
        fprintf(stderr, "int wrapping!\n");
        exit(-1);
    }

    result = uint1 - uint2;
    printf("result = %u\n", result);

    return 0;
}
#endif

#if 0
// 위험한 코드 3.
#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int uint1, uint2, result = 0;
    uint1 = UINT_MAX;
    uint2 = 2;

    result = uint1 * uint2;
    printf("result = %u\n", result);

    return 0;
}
#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int uint1, uint2, result = 0;
    uint1 = UINT_MAX;
    uint2 = 2;

    if (uint1 > UINT_MAX / uint2) {
        fprintf(stderr, "int wrapping!\n");
        exit(-1);
    }

    result = uint1 * uint2;
    printf("result = %u\n", result);

    return 0;
}
#endif 
