#include<iostream>

using namespace std;

int main() {
	int x, y, w, h;
	int min = 0;
	int arr[4] = { 0 };

	cin >> x >> y >> w >> h;

	arr[0] = w - x;
	arr[1] = h - y;
	arr[2] = x;
	arr[3] = y;


	min = arr[0];
	for (int i = 1; i < 4; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	cout << min;
}