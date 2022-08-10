#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main() {

	int h, w, n = 1, number = 0;;
	int cnt = 0;
	int num = 101;
	int a = 0;

	scanf("%d", &cnt);

	while (a<cnt) {


		for (int i = 0; i < cnt; i++) {


			scanf("%d %d %d", &h, &w, &number);

			int** arr = malloc(sizeof(int*) * h);   // 이중 포인터에 (int 포인터 크기 * row)만큼
													 // 동적 메모리 할당. 배열의 세로

			for (int i = 0; i < h; i++)            // 세로 크기만큼 반복
			{
				arr[i] = malloc(sizeof(int) * w);    // (int의 크기 * col)만큼 동적 메모리 할당. 배열의 가로
			}


			for (int i = h - 1; i >= 0; i--) {

				for (int j = 0; j < w; j++) {

					arr[i][j] = num;
					num++;
				}
				num = num - w;
				num += 100;
			}

			bool exitOuterLoop = false;
			for (int i = 0; i < w; i++) {

				for (int j = h - 1; j >= 0; j--) {


					if (n == number) {
						exitOuterLoop = true;
						printf("%d\n", arr[j][i]);
						num = 101;
						n = 1;
						break;

					}
					n++;

				}
				if (exitOuterLoop == true)
					break;
			}


			for (int i = 0; i < h; i++) {
				free(arr[i]);
			}
			free(arr);


			
		}
		return 0;
	}
	a++;
	
}