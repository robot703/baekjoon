#include<iostream>

using namespace std;

int main() {
	int arr[9][9];
	int max=0,i,j;
	int n=0, m=0;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
	max = arr[0][0];
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				n = i;
				m = j;
			}
		}
	}
	cout << max << "\n" << n+1 << " " << m+1;
}