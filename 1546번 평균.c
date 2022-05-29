#include<stdio.h>

int main() {
    int  x, i, max=0;
    double avg=0;
    
    scanf_s("%d", &x);

    int bar[1000]={0};

    for (i = 1; i <= x; i++) {
        scanf_s("%d", &bar[i]);
    
    if (max < bar[i]) 
        max = bar[i];
    }
    for (i = 1; i <= x; i++) {
         avg += (float)bar[i] / max * 100;
       
    }
    printf("%lf", avg / x);
}