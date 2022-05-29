#include<stdio.h>

int main() {
    int a, b;
    scanf_s("%d %d", &a, &b);
    {
        if (a > 0) {
            if (b > 0)
                printf("1");
            else if (b < 0)
                printf("4");
        }
        else if (a < 0) {
            if (b < 0)
                printf("3");
            else
                printf("2");
        }
        return 0;
    }
}