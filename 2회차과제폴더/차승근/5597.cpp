#include <iostream>

using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int arr[31];
	for (int i = 0; i < 28; i++) {
		int callNum;
		cin >> callNum;
		arr[callNum] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (arr[i] != 1) cout << i << "\n";
	}
}