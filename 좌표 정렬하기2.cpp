#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	int a, b;
	vector<pair<int, int>>v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(pair<int, int>(b, a));
	}

	sort(v.begin(), v.end());

	
		
	
	for (int i = 0; i < v.size(); i++) {

		printf("%d %d\n", v[i].second, v[i].first);
	}
}