#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
    int num1, num2, j, count = 0, n = 0;
    int sum = 0;
    int min = 0;

    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++) {

        for (j = 2; j < i + 1; j++) {
            if (i % j == 0)
                break;
        }
        
        if (j == i) {
            if (sum==0)
                min = i;
            sum += i;
            
        }
            
    }

    if(sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
        

    return 0;
}
