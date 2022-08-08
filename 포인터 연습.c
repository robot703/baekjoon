#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

	char arr[100];
	char* parr = &arr;


	scanf("%s", &arr);

	for(int i=0; i<strlen(arr);i++)
	printf("%c", *(parr+i));

}