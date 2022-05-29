#include<stdio.h>

int main() {        

    int a;
    scanf_s("%d", &a);
    

        if ((a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0)))
            printf("1");
        else
            printf("0");
    
    return 0;
}