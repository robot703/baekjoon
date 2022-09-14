#include<iostream>
using namespace std;

int main() {
	int x, y, z,big,count=0;

	while (1) {
		cin >> x >> y >> z;
		x = x * x;
		y = y * y;
		z = z * z;

		

		if (x == 0 && y == 0 && z == 0)
			break;

		if (x  + y  == z)
			count++;
		if (x  + z  == y)
			count++;
		if (y  + z  == x)
			count++;
		if (z == 0 || y == 0 || x == 0) {
			cout << "wrong" << "wn";
			break;
		}
		if (count>0)
			cout << "right" << "\n";
		else 
			cout << "wrong" << "\n";
		count = 0;

	}
}