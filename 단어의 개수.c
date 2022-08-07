#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 1000000

//int main() {
//
//	char arr[SIZE] = " ";
//	int count = 1;
//
//	scanf("%[^\n]s", arr);
//
//	int i = 0;
//	while (arr[i] != NULL) {
//
//		if (arr[i] == ' ')
//			++count;
//		i++;
//	}
//	if (arr[0] == ' ')
//		count = count - 1;
//	
//	printf("%d", count);
//}

int main() {

	char arr[SIZE] = "";
	char* token;
	int count = 0;

	scanf("%[^\n]s", arr);

	token = strtok(arr, " ");

	while (token !=NULL)
	{
		token = strtok(NULL, " ");
		count++;
	}
	printf("%d", count);
}