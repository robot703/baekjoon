#include<stdio.h>

int main() {
	int a = 20;

	int* ptr_a=&a;

	

	printf("a의 값 : %d\n", a);
	printf("a의 주소값 : %d\n", &a);
	printf("ptr_a의 저장된 값 : %d\n", ptr_a); 
	printf("ptr_a의 가리키는 변수의값 : %d\n", *ptr_a);
}