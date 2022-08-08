#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>	
#include<stdlib.h>

int main() {
	int *arr;
	int N = 0, swap = 0;;

	scanf("%d", &N);
	arr = (int*)calloc(N,sizeof(int) );

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i<N-1; i++) {

		for (int j = 0; j < N-1; j++) {
			
			if (arr[j] > arr[j+1]) {

				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
	for (int i = 0; i < N ; i++)
		printf("%d\n", arr[i]);

	free(arr);
}