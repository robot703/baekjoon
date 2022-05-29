#include<stdio.h>

int main() {
    int n, m;
    scanf_s("%d", &m);
    for (n = 1; n <= 9; n++) {
        printf("%d * %d = %d\n", m, n, m * n);
    }
    return 0;
}