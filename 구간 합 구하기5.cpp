#include<iostream>
#include<stdio.h>

using namespace std;

//int main() {//½Ã°£ÃÊ°úÄÚµå
//	int N;
//	int M;
//	int cnt = 0;
//	int a, b, c, d;//xÁÂÇ¥,yÁÂÇ¥
//	cin >> N >> M;
//	int **arr;
//	arr = new int*[N];
//	for (int i = 0; i < N; i++)
//		arr[i] = new int[N];
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b >> c >> d;
//		for (int j = a-1; j < c; j++) {
//			for (int k = b-1; k < d; k++)
//				cnt += arr[j][k];
//		}
//		cout << cnt<<"\n";
//		cnt = 0;
//	}
//	
//}
int map[1025][1025];
int dp[1025][1025];
int main() {
	int N;
	int M;
	int cnt = 0;
	int a, b, c, d;//xÁÂÇ¥,yÁÂÇ¥
	cin >> N >> M;
	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] - dp[i][j] + map[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c >> d;
		cout << (dp[c][d] - dp[c][b - 1] - dp[a - 1][d] + dp[a - 1][b - 1]) << '\n';
	}
}