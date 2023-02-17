#include<iostream>

using namespace std;

int main() {
	int n;
	int cnt=0;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	
	if (n == 1) {
		cout << arr[0];
		return 0;
	}
	cnt += arr[0];
	for (int i = 0; i < n; i++) {
		if (i == n - 2 || i == n - 3){
			cnt += arr[n - 1];
			break;
		}
		else if (i == -1 && i - 1 == -1) {
			cnt += arr[i + 1];
			arr[i + 1] = -1;
		}
			
		else if (arr[i+1] < arr[i + 2]) {
			cnt += arr[i + 2];
			arr[i + 2] = -1;
			i = i + 1;
		}
		else {
			cnt += arr[i + 1];
			arr[i + 1] = -1;
		}
		
	}
	cout << cnt;
}