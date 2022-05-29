#include<stdio.h>
int main() {
    int a, n, b, c;
    scanf_s("%d", &n);
    for (a = 1; a <= n; a++) {
        scanf_s("%d %d", &b, &c);
        printf("Case #%d: %d\n", a, b + c);
    }
    return 0;
}