#include<iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int begin, end;
	begin = 0;
	end = s.length() - 1;
	if (s.length() == 1) {
		cout << 1;
		return 0;
	}

	if (s.length() % 2 == 1) {
		while (1) {
			
			if (s[begin] == s[end]) {
				begin++;
				end--;
				if (begin - end == 0) {
					cout << 1;
					return 0;
				}
			}
			else {
				cout << 0;
				return 0;
			}
		}
	}
	else{
		while (1) {
		
			if (s[begin] == s[end]) {
				begin++;
				end--;
				if ( end- begin == -1) {
					cout << 1;
					return 0;
				}
			}
			else {
				cout << 0;
				return 0;
			}
		}
		
	}
}