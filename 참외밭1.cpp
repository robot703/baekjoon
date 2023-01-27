#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;
//
//int main() {
//	int n;
//	int a,b;
//	int area=1;
//	int min1, min2;
//	int k;
//	
//	cin >> n;
//
//	vector<pair<int, int>>v;
//	for (int i = 0; i < 6; i++) {
//		cin >> a >> b;
//		v.push_back(pair<int, int>(a, b));
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = i+1; j < 6; j++) {
//			if (v[i].first == v[j].first && i!=j) {
//				if (v[i].second < v[j].second)
//					min1 = v[i].second;
//				else
//					min1 = v[j].second;
//				
//				k = i+1;
//				for (int f = 0; f < 6; f++) {
//					if (v[k].first == v[f].first && k!=f) {
//						if (v[k].second < v[f].second) {
//							min2 = v[k].second;
//							v[k].second = 0;
//							v[i].second = 0;
//							v[j].second = 0;
//							v[f].second = 0;
//							goto exit;
//						}
//						else {
//							min2 = v[f].second;
//							v[k].second = 0;
//							v[f].second = 0;
//							v[i].second = 0;
//							v[j].second = 0;
//							goto exit;
//						}
//						
//					}
//				}			
//			}
//		}
//	}
//	exit:
//	for (int i = 0; i < 6; i++) {
//		if (v[i].second != 0)
//			area *= v[i].second;
//	}
//	cout << n*(area-min1*min2);
//}
//맞은 코드
int main() {
	int n, di, l, maxi, minis, maxis, ans;
	int len[6];
	vector<int> tok;

	cin >> n;

	for (int i = 0; i < 6; i++) {
		cin >> di >> l;
		len[i] = l;
	}

	for (int i = 0; i <= 4; i++) {
		tok.emplace_back(len[i] * len[i + 1]);
	}

	tok.emplace_back(len[0] * len[5]);
	maxi = max_element(tok.begin(), tok.end()) - tok.begin();
	maxis = *max_element(tok.begin(), tok.end());
	minis = tok[(maxi + 3) % 6];

	ans = n * (maxis - minis);

	cout << ans << "\n";

	return 0;
}