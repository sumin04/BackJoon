#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 2 * n - 1; j > i+i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++) {
		for (int j = n - i; j > 1; j--) {
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
