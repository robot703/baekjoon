#include<iostream>

using namespace std;

int number = 100;
int primeNum[100];

void primeNumber() {//에라토스테네스의 체
	for (int i = 0; i <= number; i++) {
		primeNum[i]=i;
	}
	for (int i = 2; i <=sqrt(number); i++) {
		if (primeNum[i] == 0)
			continue;

		for (int j = i * i; j <= number; j += i) {
			primeNum[j] = 0;
		}
	}
	for (int i = 2; i <= number; i++) {
		if (primeNum[i] != 0)
			cout << primeNum[i];
	}
}

int main() {
	primeNumber();
}