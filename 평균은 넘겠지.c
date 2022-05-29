#include<stdio.h>

int main() {
	int c = 0, n = 0;

	scanf_s("%d",&c);

	for (int i = 0; i < c; i++) {
		scanf_s("%d", &n);

		int score[1000], sum = 0;
		double avg = 0;

		for (int j = 0; j < n; j++) {
			scanf_s("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / n;
		int count = 0;

		for (int j = 0; j < n; j++) {
			if (sum < score[j])
				count++;
		}
		printf("%.3f%%\n", (double)count * 100 / n);
	}
	return 0;
}