#include<stdio.h>

int main() {
	int a, b, c, d, e;
	int x;
	int n = 0;
	int value;
	scanf_s("%d", &x);
	value = x;
	
		while (1) {
			a = x % 10;//26%10=6
			b = x / 10;//26/10=2
			c = (a + b)%10;//합에서 구한 가장 오른쪽 자리
			d = a * 10;//6*10=60
			e = c + d;//60+8=68
			x = e;
			n++;
			if (e == value)
				break;
		}
	printf("%d", n);
	
}