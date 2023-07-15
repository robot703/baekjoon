#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000


int main() {
	int big = 0;
	int arr[MAX] = { 0, };
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == -1) {
			break;
		}
		if (big < arr[i])
			big = arr[i];
	}

	printf("%d", big);
}

