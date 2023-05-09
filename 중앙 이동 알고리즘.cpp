#include<iostream>

using namespace std;

int main() {
	int n,s=3;
	cin >> n;
	if (n == 1)
		cout << s*s;
	else {
		for (int i = 1; i < n; i++) {
			s += s - 1;
		}
		cout << s * s;
	}
	return 0;
}