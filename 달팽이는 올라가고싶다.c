#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {// 시간초과 코드
//
//	int V, A, B, SUM=0, N=1;
//
//	scanf("%d %d %d", &A, &B, &V);
//
//	SUM = A;
//	while (1) 
//	{
//		if (SUM >= V) {
//			printf("%d", N);
//			break;
//		}
//		else {
//			SUM += - B + A;
//			N++;
//		}
//
//	}
//
//}

int main() {
	int V, A, B, SUM = 0, N = 1;
	
	scanf("%d %d %d", &A, &B, &V);

	SUM = (V - B-1 ) / (A - B) + 1;
	printf("%d", SUM );
}