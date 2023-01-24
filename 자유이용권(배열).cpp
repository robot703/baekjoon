#include<iostream>
#include<queue>
#include<functional>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long n, a, total=0;
	long cnt = 0;

	cin >> n;
	priority_queue<long, vector<long>, less<long>>pq;

	queue<long>q;
	long i;
	for (i = 0; i < n; i++) {
		cin >> a;
		total += a;
		pq.push(a);
	}
	cnt = total % 2 == 0 ? total / 2 : total / 2 + 1;

	if (cnt < pq.top()) {
		cout << (total - pq.top()) * 2 + 1;
		return 0;
	}
	cout << total;
}