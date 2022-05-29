#include<stdio.h>

int main() {
	int max, n, i, num[9];
	max = 0;

	for (i = 0; i <= 8; i++) {
		scanf_s("%d", &num[i]);
		if (max < num[i]) {
			max = num[i];
			n = i+1; 
		}
	}
	printf("%d\n%d", max, n);
}