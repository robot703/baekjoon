#include<iostream>

using namespace std;

int q, pSum[222222][26];
string S;

int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	cin >> S;
	for (int i = 0; i < S.length(); ++i) {
		// РЬРќВЈ Че
		if (i != 0) {
			for (int k = 0; k < 26; ++k)
				pSum[i][k] = pSum[i - 1][k];
		}
		int now = S[i] - 'a';
		pSum[i][now]++;
	}

	cin >> q;
	for (int i = 0; i < q; ++i) {
		char num;
		int l, r;
		cin >> num;
		cin >> l >> r;
		int now = num - 'a';

		int p1 = l > 0 ? pSum[l - 1][now] : 0;
		int p2 = pSum[r][now];
		cout << p2 - p1 << '\n';
	}

	return 0;
}