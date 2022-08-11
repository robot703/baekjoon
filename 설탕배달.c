#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int x = 0;
	int exit = 0;

	scanf("%d", &x);

	for (int A = 0; A < 1667; A++) {
		for (int B = 0; B < 1001; B++) {
			if (((3 * A) +( 5 * B ))== x) {
				exit = 1;
				printf("%d", A + B);

				return 0;
			}
			
		}
		if (exit == 1)
			break;
	}

	printf("-1");
}
