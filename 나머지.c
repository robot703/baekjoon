#include<stdio.h>

int main() {

	int save = 0, save1 = 0;
	int input = 0;
	int p = 0;
	int num1[10] = { 0 };


	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num1[i]);
	}

	for (int i = 0; i < 10; i++)
		num1[i] = num1[i] % 42;

	for (int i = 0; i < 10; i++) {
		save = 0;
		for (p = 0; p < i; p++) {
			if (num1[i] == num1[p])
				save++;
		}
		if (save == 0)
			save1++;
	}
	printf("%d", save1);
	return 0;
}