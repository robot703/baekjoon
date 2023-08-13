#include<iostream>
#include<queue>

using namespace std;

int main() {
	int n, k;
	queue <int> q;
	cin >> n>> k;
	for (int i = 1; i <= n; i++) q.push(i);

	cout << "<";

	while (q.size() != 0)
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front()); // i번째 카드를 맨뒤로
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">";
}