//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//float get_MAX_MIN(float num1, float num2, float num3);
//
//float min;
//float big;
//
//int main() {
//	float a, b, c;
//	
//	printf("첫 번째 수 :");
//	scanf("%f", &a);
//
//	printf("두 번째 수 : ");
//	scanf("%f", &b);
//
//	printf("세 번째 수 : ");
//	scanf("%f", &c);
//
//
//	printf("가장 큰수와 작은수의 차이 : %.1f ", get_MAX_MIN(a, b, c));
//
//	return 0;
//}
//
//float get_MAX_MIN(float num1, float num2, float num3) {
//
//	
//	if (num2 < min)
//		min = num2;
//	if (num3 < min)
//		min = num3;
//
//	if (num2 > big)
//		big = num2;
//	if (num3 > big)
//		big = num3;
//
//	float result = big - min;
//
//	return result;
//
//}