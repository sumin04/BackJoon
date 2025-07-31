#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, m = 0;
	cin >> n;
	for (int i = 0; i < 9; i++) {
		cin >> m;
		n = n - m;
	}
	cout << n;
	return 0;
}
