#include<iostream>

using namespace std;

int main() {
	int N, M,K;
	int* stack;
	int a = 0, esc = 0;;
	cin >> N >> M;

	 stack = (int*)malloc(sizeof(int) * N);

	
	for (int i = 0; i < M; i++) {
		cin >> K;
		for (int j = 0; j < K; j++) {
			cin >> stack[j];
		}
		for (int a = 0; a < K-1; a++) {
			if (stack[a] < stack[a + 1]) {
				esc = 1;
				break;
			}
			else
				continue;
		}
		if (esc == 1)
			break;


	}
	if (esc == 1)
		printf("No");
	else
		printf("Yes");

}