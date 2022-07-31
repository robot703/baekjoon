#include<stdio.h>

int main() {
	
	int x;//사용자가 원하는 숫자 범위
	
	scanf_s("%d", &x);
	han_soo(x);
}
int han_soo(int n){
	int sum=n;
	int a, b, c;//한수인지 비교해주는 변수
	int cnt = 0;//한수의 개수를 세주느 변수
	for (int n = 1; n <= sum; n++) {
		if (n < 10)
			cnt++;

		else if (n < 100) {
			
				cnt++;
		}

		else if (n <=1000) {
			a = n / 100;
			b = (n % 100) / 10;
			c = n % 10;
			if ((c-b)==(b-a))
				cnt++;
		}
		
	}
	printf("%d", cnt);
}