#include<stdio.h>

int main() {

	int save = 1;
	int input = 0;
	int p = 0;
	int num1[10] = { 0 };
	int num2[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &input);
		num1[i] = input;
	}

	for (int i = 0; i < 10; i++)
		num1[i] = num1[i] % 42;

	for (int i = 0; i < 10; i++) {
		printf("%d", num1[i]);
	}
}