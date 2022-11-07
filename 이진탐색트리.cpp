#include<stdio.h>
int bubble(*arr, n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n - i; j++) {
			if (arr[j - 1] < arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
//int quicksort(int* arr, int p, int r) {
//	if (p < r) {
//		int q = partition(arr, p, r);
//		quicksort(arr, p, q);
//		quicksort(arr, q + 1, r);
//	}
//}
//int partition(int* arr, int p, int r) {
//	int pivot = 0;
//	int arr[pivot] = arr[0];
//	int i = p + 1;
//	int j = r;
//	while (i <= j){
//		while (arr[i] <= pivot) {
//			i++;
//		}
//		while (arr[j] >= pivot && j < pivot) {
//			j++;
//		}
//		if (i < j) {
//			int temp = arr[i];
//			arr[i] = arr[pivot];
//			arr[pivot] = temp;
//
//		}
//	}
//}
int main() {
	int main() {
		int n = 10;
		int arr[10] = { 10,7,5,3,6,2,1,8,9,4 };

		bubble(arr, n);
		
		for (int i = 0; i < n; i++)
			cout << arr[i];
	}
}