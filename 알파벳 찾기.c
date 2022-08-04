#include<stdio.h>
#include<string.h>


int main() {

	char arr[100] = "";
	char arry[] = "abcdefghijklmnopqrstuvwxyz";
	int arryy[26] = { 0 };

	gets(arr);

	for (int i = 0; i < 26; i++)
		arryy[i] = -1;

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j <strlen(arr); j++) {
			if (arry[i] == arr[j]&&arryy[i]==-1)
				arryy[i] = j; 
		}
		
	}
	for (int j = 0; j < 26; j++)
		printf("%d ", arryy[j]);
	 
}