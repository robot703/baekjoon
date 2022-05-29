#include<stdio.h>

int main() {
    int a, n;
    scanf_s("%d", &n);
    for (a = n; a >= 1; a--) {
        printf("%d", a);
        n--;
    }

    return 0;
}