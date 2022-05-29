#include<stdio.h>


int main() {
	int A1, A2, A3, c;
	
	scanf_s("%d %d\n", &A1, &A2);
	scanf_s("%d",&c);

	A3 = A2 + c;
	
	if (A3 >= 60) {
		A1 += A3 / 60;
		A3 = A3 % 60;
		if (A1 > 23)
			A1 = A1 % 24;
	}
	
	if (A3 < 60)

		printf("%d %d\n", A1, A3);
	return 0;
}

