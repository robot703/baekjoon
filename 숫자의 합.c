#include<stdio.h>
 #include<string.h>

int main() {
	int n,sum=0;

	char arr[100]={0,};

	scanf_s("%d", &n);

	scanf_s("%s", arr);

	for (int i = 0; i < n; i++) {
		sum += arr[i]-48;
	}
	printf("%d", sum);
}

