#include<stdio.h>

int main() {

	int n,i=1, x = 1;

	scanf_s("%d", &n);

	while (1){
		if (n - x <= 0)
			break;

		n -= x;
		x = i * 6;
		i++;
	}
	printf("%d", i);
	return 0;
}