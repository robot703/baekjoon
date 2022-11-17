#include<iostream>

using namespace std;
int arr[10000]={0};

int main() {
	int n,index;
	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf_s("%d",&index);
		arr[index]++;
	}
	
	for (int i = 0; i < 10000; i++) {
		if (arr[i] !=0) {
			for (int j = 0; j < arr[i]; j++)
				printf("%d \n", i);
		}
	}
}