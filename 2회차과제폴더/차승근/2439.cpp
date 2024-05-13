#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, cnt = 1;
	cin >> a;
	for (int i = 1; i < a + 1; i++) {
		for (int j = 0; j < (a - cnt); j++) {
			cout << " ";
		}
		for (int j = 0; j < cnt; j++) {
			cout << "*";
		}
		cout << "\n";
		cnt++;
	}
}