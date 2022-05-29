#include<stdio.h>


int main() {
    int a, b, c, input;
    scanf_s("%d", &input);
    for (c = 1; c <= input; c++){
        scanf_s("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
    
}