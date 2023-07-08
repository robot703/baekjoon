#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int n;
	int dice_num = 0;
	int arr[2] = { 0, };
	srand(time(NULL));

	printf("주사위를 몇번 던질건가요? : ");
	scanf("%d", &n);

	
	for (int i = 0; i < n; i++) {
		dice_num = rand() % 2 + 1;
		if (dice_num == 1)//앞면
			arr[0]++;
		else
			arr[1]++;
	}

	printf("앞면 횟수 : %d\n뒷면 횟수 : %d\n", arr[0], arr[1]);
	if (arr[0] > arr[1])
		printf("앞면이 더 많이 나왔습니다.");
	else
		printf("뒷면이 더 많이 나왔습니다.");
}