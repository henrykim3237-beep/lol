#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long min, max;
    scanf("%lld %lld", &min, &max);

    long long size = max - min + 1;
    static int check[1000001] = { 0 };

    for (long long i = 2; i * i <= max; i++) {
        long long square = i * i;

        long long start = min / square;
        if (min % square != 0) start++;
        start *= square;

        for (long long j = start; j <= max; j += square) {
            check[j - min] = 1;
        }
    }

    int count = 0;

    for (long long i = 0; i < size; i++) {
        if (check[i] == 0) count++;
    }

    printf("%d\n", count);

    return 0;
}
