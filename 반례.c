#include<stdio.h>

int main() {
	int h, m;
	scanf_s("%d %d", &h, &m);

	if (h == 0) {
		if (m < 45)
			printf("%d %d", 23, m + 15);
		else if (m >= 45)
			printf("%d %d", h, m - 45);
	}
	else if ((h >= 1) && (h <= 23)) {
		if (m < 45)
			printf("%d %d", h - 1, m + 15);
		else if (m >= 45)
			printf("%d %d", h, m - 45);
	}
	else
		return 0;
}