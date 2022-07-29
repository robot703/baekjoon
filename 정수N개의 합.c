#include<stdio.h>


long long sum(int *a, int n);

/*int main() {

	int n;
	scanf("%d", &n);
	sum(n);

}*/

long long sum(int* a, int n) {

	long long sum_a = 0;

	for (int i = 0; i < n; i++) {
		sum_a += a[i];

	}
	return sum_a;
}
