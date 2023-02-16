#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std;

int N;
stack<int>A;
int number[1000001];
int ans[1000001];

int main() {
	
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> number[i];

	A.push(number[N - 1]);
	ans[N - 1] = -1;

	for (int i = N - 2; i >= 0; i--) {
		while (!A.empty() && A.top() <= number[i])
			A.pop();
		if (A.empty())
			ans[i] = -1;
		else
			ans[i] = A.top();

		A.push(number[i]);
		
	}
	for (int i = 0; i < N; i++)
		cout << ans[i]<<"\n";

	
}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	int cnt = 0;
//
//	cin >> n;
//	vector<int>v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (i == n - 1) {
//			cout << -1 << " ";
//			break;
//		}
//		for (int j = i+1; j < n; j++) {
//			if (v[i] < v[j]) {
//				cout << v[j]<<" ";
//				cnt++;
//				break;
//			}
//			cnt = 0;
//		}
//		if (cnt == 0)
//			cout << -1<<" ";
//		
//	}
//}