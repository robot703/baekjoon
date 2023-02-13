#include<iostream>

using namespace std;

int main() {
	int n;
	char a;
	int l, r;
	int cnt=0;
	string s;
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> l >> r;
		for (int j = l; j <= r; j++) {
			if (s[j] == a)
				cnt++;
			else
				continue;
		}
		cout << cnt<<"\n";
		cnt = 0;
	}

}