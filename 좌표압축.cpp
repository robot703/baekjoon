#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>v(N);
	vector<int>v1(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
		v1[i] = v[i];
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < N; i++) {
		int idx = lower_bound(v.begin(), v.end(), v1[i]) - v.begin();
		printf("%d ", idx);
	}
	
}