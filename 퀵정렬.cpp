#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int number = 10;
int data[] = { 1,10,5,8,7,6,4,3,2,9 };

void quicksort(int *data, int start, int end) {
	if (start >= end) {//원소가 1개인 경우 그대로 두기
		return;
	}

	int pivot = start;//피봇은 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {//엇갈릴 떄까지 반복
		while (i <= end && data[i] <= data[pivot]) {
			//피봇보다 큰값을 만날 때까지
			i++;
		}
		while (j > start && data[j] >= data[pivot]) {
			//피봇보다 작은 값을 만날 떄까지
			j--;
		}
		if (i > j) {//현재 엇갈린 상태면 피봇과 교체
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else {//엇갈리지 않았다면 i와 j를 교체
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	
	quicksort(data, start, j - 1);
	quicksort(data, j + 1, end);
}

int main() {
	quicksort(data, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	}
	return 0;
}