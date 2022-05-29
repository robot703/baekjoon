#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf_s("%d", &a);

    for (b = 0; b < a; b++) {
        scanf_s("%d %d", &c, &d);
        printf("%d\n", c + d);
    }
    return 0;
}