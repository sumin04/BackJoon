#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = (n * 2) - 1 - (i * 2); j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}