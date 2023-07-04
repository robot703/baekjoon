#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#include <stdio.h>

int main()
{
    int n=2;
    while (n>1) {
        printf("정수 입력(1이하 입력하면 종료) : ");
        scanf("%d", &n);
        if (n == 2) {
            printf("%d는 소수입니다.\n",n);
     
        }
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("%d는 소수가 아닙니다.\n", n);
                break;
            }
            else {
                printf("%d는 소수입니다.\n", n);
                break;
            }
        }
    }
    return 0;
}