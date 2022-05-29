#include<stdio.h>

int main() {
	double a;
	scanf_s("%lf", &a);
	printf("%.18lf", 1/a);
}