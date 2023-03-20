#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[100001] = { 0, };

int main() {
	int n, s;
	int start=0, end=0;
	int cnt = 0;
	int sum = 0;
	int len = 1000001;

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sum = arr[0];

	while (start<end) {
		if (sum < s) {
			end++;
			sum += arr[end];
		}
		else if (sum > s) {
			sum -= arr[start];
			start++;
		}
		else if (sum == s) {
			cnt++;
			if (len < (end + start) + 1)
				len = (end - start) + 1;
		}
	}	
	if (cnt == 0)
		cout << 0;
	else
		cout << cnt;
}