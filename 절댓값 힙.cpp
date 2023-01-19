#include<iostream>
#include<queue>
#include<functional>

using namespace std;

struct comp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		else
			return abs(a) > abs(b);
	}
};

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n,a;

	priority_queue<int, vector<int>, comp>pq;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 0) {
			if (pq.empty())
				cout << 0<<"\n";
			else {
				cout << pq.top()<<"\n";
				pq.pop();
			}
		}
		else{
			pq.push(a);
		}
	}
}