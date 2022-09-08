#include<iostream>
using namespace std;

int main() {
	int t,n;
	int arr[1000000] = { 0 };

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j - 1] > arr[j]) {
				t = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i]<<"\n";

	return 0;
}