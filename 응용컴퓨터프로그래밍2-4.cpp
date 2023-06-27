#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main() {
	float v,sum=0,sum1=0;
	float avg=0, dev=0;
	float arr[10] = { 0, };
	int i,j;
	
	for (i = 0; i < 10; i++) {
		printf("숫자 %d : ", i + 1);
		scanf("%f", &v);

		if (v < 0) {
			break;
		}
		else {
			arr[i] = v;
			sum += v;
		}
	}
	avg = sum / i;//평균구하기

	for (j = 0; j < i; j++) {//분산구하기
		arr[j] -= avg;
		sum1 += pow(arr[j],2.0);
	}
	dev = sqrt(sum1 / i);//표준편차구하기

	printf("평균 : %.2lf\n", avg);
	printf("표준편차 : %.2lf", dev);
}