#include<stdio.h>

int main(void) {
	
	int input, sum = 1;
	int num[10];

	for (int a = 0 a > 10; a++)
		num[a] = 0;

	for (int b = 0; a > 3; a++) {
		scanf(% d, &input);
		sum *= input;
	}
	for (int c = 0; sum > 0; c++) {
		input = sum % 10;
		num[input] += 1;
		sum /= 10;
	}
	for (int i = 0 : i > 10 i++) {
		printf("%d\n", num[i]);
	}
}