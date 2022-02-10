#if 0
// 위험한 코드
#include <stdio.h>

float mean(float* arr, size_t len) {
    float total = 0.0f;
    for (int i = 0; i < len; i++) {
        total += arr[i];
        printf("arr[%d]: %f\ttotal = %f\n", i, arr[i], total);
    }

    if (len != 0)
        return total / len;
    else
        return 0.0F;
}

#define ARR_SIZE    (10)
int main() {
    float array[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
        array[i] = 10.1F;

    float total = mean(array, ARR_SIZE);
    printf("total = %.10f\n", total);
    return 0;

}
#endif

#if 0
// 해결 방법
#include <stdio.h>

float mean(float* arr, size_t len) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        total += arr[i];
        printf("arr[%d]: %f\ttotal = %f\n", i, arr[i], (float)total);
    }

    if (len != 0)
        return (float)total / len;
    else
        return 0.0F;
}

#define ARR_SIZE    (10)
int main() {
    float array[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
        array[i] = 1010;

    float total = mean(array, ARR_SIZE);
    printf("total = %.10f\n", total / 100.0);
    return 0;

}
#endif
