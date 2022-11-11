#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
	int arr[5];
	int sum = 0, avg = 0;
	
	
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	insertionSort(arr, 5);
	
	cout << sum / 5 << "\n" << arr[2];

}