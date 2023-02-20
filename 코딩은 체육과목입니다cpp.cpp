#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    n = n / 4;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << "long int"; break;
        }
        cout << "long" << " ";

    }
}