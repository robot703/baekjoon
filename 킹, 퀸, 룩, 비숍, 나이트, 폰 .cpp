#include<iostream>

using namespace std;

int main() {
	int arr[6] = { 0 };
	int arr1[6] = { 1,1,2,2,2,8};

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
		cout << arr1[i] - arr[i]<<" ";
	}
	
}