#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int arr[10];

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] %= 42;
	}

	int cnt = 1;
	for (int i = 1; i < 10; i++) {
		bool a = true;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				a = false;
				break;
			}
		}
		if (a == true) cnt++;
	}

	cout << cnt;
}