#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


#include <stdio.h>

int main()
{
    int num,j, count=0,n=0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);


        for ( j = 2; j < num+1; j++) {
            if (num % j == 0)
                break;
        }
        if (j == num)
            count++;
    }

    printf("%d", count);

    return 0;
}
