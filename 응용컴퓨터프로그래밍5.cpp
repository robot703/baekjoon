#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void Frist_Star(int num);
void Second_Star(int num);
int main() {

	int n;
	printf("1번 2번 삼각형을 골라보세요 :");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		Frist_Star(n);
		break;
	case 2:
		Second_Star(n);
		break;
	}
}

void Frist_Star(int num) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("* ");
		}printf("\n");
	}
}

void Second_Star(int num) {
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			printf("* ");
		}printf("\n");
	}
}