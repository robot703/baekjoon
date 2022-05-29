#include<stdio.h>

int main() {
    int max = -1000001, min = 1000001, i, n, a;
    scanf_s("%d", &n);

    for (i = 0; i < n; i++) {
        scanf_s("%d", &a);

        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    printf("%d %d", min, max);

    return 0;
}