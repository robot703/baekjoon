#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void reverse(char arr[]) {
	int len = strlen(arr);
	
	for (int i = 0; i < len/2; i++) {
		char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}
int main() {
	char A[10002] = { 0 };
	char B[10002] = { 0 };
	char rev[10003] = { 0 };
	int carry = 0;
	int len = 0;

	scanf("%s %s", A, B);

	reverse(A);
	reverse(B);

	len = (strlen(A) > strlen(B) ? strlen(A) : strlen(B));

	for (int i = 0; i < len; i++) {
		int sum = A[i] - '0' + B[i] - '0' + carry;
		if (sum < 0)
			sum += '0';
		if (sum > 9)
			carry = 1;
		else
			carry = 0;
		rev[i] = sum % 10 + '0';
	}
	if (carry == 1)
		rev[len] = '1';

	reverse(rev);
	printf("%s", rev);
	return 0;
}
