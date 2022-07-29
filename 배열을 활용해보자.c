#include<stdio.h>

int rearray(int arr[], int last);
int maxmin(int arr[], int last);
int even(int arr[], int last);

int main() {
	int arr[10];
	int n;

	printf("입력하실 숫자 개수 : ");
	scanf_s("%d" ,&n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	rearray(arr, n);
	maxmin(arr, n);
	even(arr, n);
}
//입력받은 숫자들을 거꾸로 출력
int rearray(int arr[], int last) {
	int a = last;

	for (int i = last-1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	printf("\n");
}
//최대 최소 출력
int maxmin(int arr[], int last) {
	int min, max;

	min = arr[0];
	max = arr[0];
	for (int i = 0; i < last; i++) {
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d , min=%d\n", max, min);

}
//짝수 출력
int even(int arr[], int last) {

	for (int i = 0; i < last; i++) {
		if (arr[i] % 2 == 0)
			printf("arr[%d]=%d ", i,arr[i]);
	}
}
